#pragma once
// MESSAGE WATER_LEVEL_SENSOR PACKING

#define MAVLINK_MSG_ID_WATER_LEVEL_SENSOR 274

MAVPACKED(
typedef struct __mavlink_water_level_sensor_t {
 uint8_t water_level; /*<  Water level (1: available, 0: unavailable)*/
 int8_t countdown; /*<  Out of water action countdown (-1: unavailable other: countdown)*/
}) mavlink_water_level_sensor_t;

#define MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN 2
#define MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN 2
#define MAVLINK_MSG_ID_274_LEN 2
#define MAVLINK_MSG_ID_274_MIN_LEN 2

#define MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC 31
#define MAVLINK_MSG_ID_274_CRC 31



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WATER_LEVEL_SENSOR { \
    274, \
    "WATER_LEVEL_SENSOR", \
    2, \
    {  { "water_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_water_level_sensor_t, water_level) }, \
         { "countdown", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_water_level_sensor_t, countdown) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WATER_LEVEL_SENSOR { \
    "WATER_LEVEL_SENSOR", \
    2, \
    {  { "water_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_water_level_sensor_t, water_level) }, \
         { "countdown", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_water_level_sensor_t, countdown) }, \
         } \
}
#endif

/**
 * @brief Pack a water_level_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param water_level  Water level (1: available, 0: unavailable)
 * @param countdown  Out of water action countdown (-1: unavailable other: countdown)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_water_level_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t water_level, int8_t countdown)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN];
    _mav_put_uint8_t(buf, 0, water_level);
    _mav_put_int8_t(buf, 1, countdown);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN);
#else
    mavlink_water_level_sensor_t packet;
    packet.water_level = water_level;
    packet.countdown = countdown;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATER_LEVEL_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
}

/**
 * @brief Pack a water_level_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param water_level  Water level (1: available, 0: unavailable)
 * @param countdown  Out of water action countdown (-1: unavailable other: countdown)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_water_level_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t water_level,int8_t countdown)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN];
    _mav_put_uint8_t(buf, 0, water_level);
    _mav_put_int8_t(buf, 1, countdown);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN);
#else
    mavlink_water_level_sensor_t packet;
    packet.water_level = water_level;
    packet.countdown = countdown;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATER_LEVEL_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
}

/**
 * @brief Encode a water_level_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param water_level_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_water_level_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_water_level_sensor_t* water_level_sensor)
{
    return mavlink_msg_water_level_sensor_pack(system_id, component_id, msg, water_level_sensor->water_level, water_level_sensor->countdown);
}

/**
 * @brief Encode a water_level_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param water_level_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_water_level_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_water_level_sensor_t* water_level_sensor)
{
    return mavlink_msg_water_level_sensor_pack_chan(system_id, component_id, chan, msg, water_level_sensor->water_level, water_level_sensor->countdown);
}

/**
 * @brief Send a water_level_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param water_level  Water level (1: available, 0: unavailable)
 * @param countdown  Out of water action countdown (-1: unavailable other: countdown)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_water_level_sensor_send(mavlink_channel_t chan, uint8_t water_level, int8_t countdown)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN];
    _mav_put_uint8_t(buf, 0, water_level);
    _mav_put_int8_t(buf, 1, countdown);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR, buf, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
#else
    mavlink_water_level_sensor_t packet;
    packet.water_level = water_level;
    packet.countdown = countdown;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
#endif
}

/**
 * @brief Send a water_level_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_water_level_sensor_send_struct(mavlink_channel_t chan, const mavlink_water_level_sensor_t* water_level_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_water_level_sensor_send(chan, water_level_sensor->water_level, water_level_sensor->countdown);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR, (const char *)water_level_sensor, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_water_level_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t water_level, int8_t countdown)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, water_level);
    _mav_put_int8_t(buf, 1, countdown);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR, buf, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
#else
    mavlink_water_level_sensor_t *packet = (mavlink_water_level_sensor_t *)msgbuf;
    packet->water_level = water_level;
    packet->countdown = countdown;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR, (const char *)packet, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE WATER_LEVEL_SENSOR UNPACKING


/**
 * @brief Get field water_level from water_level_sensor message
 *
 * @return  Water level (1: available, 0: unavailable)
 */
static inline uint8_t mavlink_msg_water_level_sensor_get_water_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field countdown from water_level_sensor message
 *
 * @return  Out of water action countdown (-1: unavailable other: countdown)
 */
static inline int8_t mavlink_msg_water_level_sensor_get_countdown(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Decode a water_level_sensor message into a struct
 *
 * @param msg The message to decode
 * @param water_level_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_water_level_sensor_decode(const mavlink_message_t* msg, mavlink_water_level_sensor_t* water_level_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    water_level_sensor->water_level = mavlink_msg_water_level_sensor_get_water_level(msg);
    water_level_sensor->countdown = mavlink_msg_water_level_sensor_get_countdown(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN;
        memset(water_level_sensor, 0, MAVLINK_MSG_ID_WATER_LEVEL_SENSOR_LEN);
    memcpy(water_level_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
