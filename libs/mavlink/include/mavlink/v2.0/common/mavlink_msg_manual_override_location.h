#pragma once
// MESSAGE MANUAL_OVERRIDE_LOCATION PACKING

#define MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION 271

MAVPACKED(
typedef struct __mavlink_manual_override_location_t {
 int32_t lat; /*< [degE7] Latitude, expressed as degrees * 1E7*/
 int32_t lon; /*< [degE7] Longitude, expressed as degrees * 1E7*/
 int32_t relative_alt; /*< [mm] Relative altitude in meters, expressed as * 1000 (millimeters)*/
}) mavlink_manual_override_location_t;

#define MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN 12
#define MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN 12
#define MAVLINK_MSG_ID_271_LEN 12
#define MAVLINK_MSG_ID_271_MIN_LEN 12

#define MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC 88
#define MAVLINK_MSG_ID_271_CRC 88



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MANUAL_OVERRIDE_LOCATION { \
    271, \
    "MANUAL_OVERRIDE_LOCATION", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_manual_override_location_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_manual_override_location_t, lon) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_manual_override_location_t, relative_alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MANUAL_OVERRIDE_LOCATION { \
    "MANUAL_OVERRIDE_LOCATION", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_manual_override_location_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_manual_override_location_t, lon) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_manual_override_location_t, relative_alt) }, \
         } \
}
#endif

/**
 * @brief Pack a manual_override_location message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat [degE7] Latitude, expressed as degrees * 1E7
 * @param lon [degE7] Longitude, expressed as degrees * 1E7
 * @param relative_alt [mm] Relative altitude in meters, expressed as * 1000 (millimeters)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_override_location_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t lat, int32_t lon, int32_t relative_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, relative_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN);
#else
    mavlink_manual_override_location_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.relative_alt = relative_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
}

/**
 * @brief Pack a manual_override_location message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lat [degE7] Latitude, expressed as degrees * 1E7
 * @param lon [degE7] Longitude, expressed as degrees * 1E7
 * @param relative_alt [mm] Relative altitude in meters, expressed as * 1000 (millimeters)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_override_location_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t lat,int32_t lon,int32_t relative_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, relative_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN);
#else
    mavlink_manual_override_location_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.relative_alt = relative_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
}

/**
 * @brief Encode a manual_override_location struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param manual_override_location C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_override_location_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_manual_override_location_t* manual_override_location)
{
    return mavlink_msg_manual_override_location_pack(system_id, component_id, msg, manual_override_location->lat, manual_override_location->lon, manual_override_location->relative_alt);
}

/**
 * @brief Encode a manual_override_location struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param manual_override_location C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_override_location_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_manual_override_location_t* manual_override_location)
{
    return mavlink_msg_manual_override_location_pack_chan(system_id, component_id, chan, msg, manual_override_location->lat, manual_override_location->lon, manual_override_location->relative_alt);
}

/**
 * @brief Send a manual_override_location message
 * @param chan MAVLink channel to send the message
 *
 * @param lat [degE7] Latitude, expressed as degrees * 1E7
 * @param lon [degE7] Longitude, expressed as degrees * 1E7
 * @param relative_alt [mm] Relative altitude in meters, expressed as * 1000 (millimeters)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_manual_override_location_send(mavlink_channel_t chan, int32_t lat, int32_t lon, int32_t relative_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, relative_alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION, buf, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
#else
    mavlink_manual_override_location_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.relative_alt = relative_alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION, (const char *)&packet, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
#endif
}

/**
 * @brief Send a manual_override_location message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_manual_override_location_send_struct(mavlink_channel_t chan, const mavlink_manual_override_location_t* manual_override_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_manual_override_location_send(chan, manual_override_location->lat, manual_override_location->lon, manual_override_location->relative_alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION, (const char *)manual_override_location, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_manual_override_location_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t lat, int32_t lon, int32_t relative_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, relative_alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION, buf, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
#else
    mavlink_manual_override_location_t *packet = (mavlink_manual_override_location_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->relative_alt = relative_alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION, (const char *)packet, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_MIN_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_CRC);
#endif
}
#endif

#endif

// MESSAGE MANUAL_OVERRIDE_LOCATION UNPACKING


/**
 * @brief Get field lat from manual_override_location message
 *
 * @return [degE7] Latitude, expressed as degrees * 1E7
 */
static inline int32_t mavlink_msg_manual_override_location_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from manual_override_location message
 *
 * @return [degE7] Longitude, expressed as degrees * 1E7
 */
static inline int32_t mavlink_msg_manual_override_location_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field relative_alt from manual_override_location message
 *
 * @return [mm] Relative altitude in meters, expressed as * 1000 (millimeters)
 */
static inline int32_t mavlink_msg_manual_override_location_get_relative_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a manual_override_location message into a struct
 *
 * @param msg The message to decode
 * @param manual_override_location C-struct to decode the message contents into
 */
static inline void mavlink_msg_manual_override_location_decode(const mavlink_message_t* msg, mavlink_manual_override_location_t* manual_override_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    manual_override_location->lat = mavlink_msg_manual_override_location_get_lat(msg);
    manual_override_location->lon = mavlink_msg_manual_override_location_get_lon(msg);
    manual_override_location->relative_alt = mavlink_msg_manual_override_location_get_relative_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN? msg->len : MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN;
        memset(manual_override_location, 0, MAVLINK_MSG_ID_MANUAL_OVERRIDE_LOCATION_LEN);
    memcpy(manual_override_location, _MAV_PAYLOAD(msg), len);
#endif
}
