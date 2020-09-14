# Copyright (c) 2016, Swift Navigation, All Rights Reserved.
# Released under MIT License.
#
# Find documentation of parameters here:
# http://aprs.gids.nl/nmea/#gga
#
# time_t is a `time_struct` (https://docs.python.org/2/library/time.html)
# alt_m, geoidal_sep_m are in meters
import time
from math import floor
import serial

def gen_gga(time_t, lat, lat_pole, lng, lng_pole, fix_quality, num_sats, hdop, alt_m, geoidal_sep_m, dgps_age_sec, dgps_ref_id):
  hhmmssss = '%02d%02d%02d%s' % (time_t.tm_hour, time_t.tm_min, time_t.tm_sec, '.%02d' if 0 != 0 else '')
  
  lat_abs = abs(lat)
  lat_deg = lat_abs
  lat_min = (lat_abs - floor(lat_deg)) * 60
  lat_sec = round((lat_min - floor(lat_min)) * 1000)
  lat_pole_prime = ('S' if lat_pole == 'N' else 'N') if lat < 0 else lat_pole
  lat_format = '%02d%02d.%03d' % (lat_deg, lat_min, lat_sec)
  
  lng_abs = abs(lng)
  lng_deg = lng_abs
  lng_min = (lng_abs - floor(lng_deg)) * 60
  lng_sec = round((lng_min - floor(lng_min)) * 1000)
  lng_pole_prime = ('W' if lng_pole == 'E' else 'E') if lng < 0 else lng_pole
  lng_format = '%03d%02d.%03d' % (lng_deg, lng_min, lng_sec)
  
  dgps_format = '%s,%s' % ('%.1f' % dgps_age_sec if dgps_age_sec is not None else '', '%04d' % dgps_ref_id if dgps_ref_id is not None else '')
  
  str = 'GPGGA,%s,%s,%s,%s,%s,%d,%02d,%.1f,%.1f,M,%.1f,M,%s' % (hhmmssss, lat_format, lat_pole_prime, lng_format, lng_pole_prime, fix_quality, num_sats, hdop, alt_m, geoidal_sep_m, dgps_format)
  crc = 0
  for c in str:
    crc = crc ^ ord(c)
  crc = crc & 0xFF
  
  return '$%s*%0.2X' % (str, crc)

#
with serial.Serial('/dev/ttyUSB1', 38400, timeout=1) as ser:
    while True:
        # result = gen_gga(time.gmtime(), -56.529176, 'N', -33.386666, 'W', 1, 7, 1.5, 280.2, -34, 0, 0)
        result = gen_gga(time.gmtime(), 13.742418, 'N', 100.526725, 'E', 1, 7, 1.5, 280.2, -34, 0, 0)
        result = result + '\r\n'
        ser.write(result)
        time.sleep(1)
        print(result)

        #  from http://aprs.gids.nl/nmea/#gga
        #t = time.struct_time((2016, 1, 1, 17, 8, 34, 1, 0, 1))
        #print gen_gga(t, 41 + (24.8963 / 60), 'N', 81 + (51.6838 / 60), 'W', 1, 5, 1.5, 280.2, -34, None, None)

        # from http://www.gpsinformation.org/dale/nmea.htm
        # $GPGGA,183730,3907.356,N,12102.482,W,1,05,1.6,646.4,M,-24.1,M,,*75
        #t = time.struct_time((2016, 1, 1, 18, 37, 30, 1, 0, 1))
        #print gen_gga(t, 39 + (7.356 / 60), 'N', 121 + (2.482 / 60), 'W', 1, 5, 1.6, 646.4, -24.1, None, None)
