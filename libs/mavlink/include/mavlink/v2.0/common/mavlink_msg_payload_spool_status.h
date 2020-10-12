#pragma once
// MESSAGE PAYLOAD_SPOOL_STATUS PACKING

#define MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS 273

MAVPACKED(
typedef struct __mavlink_payload_spool_status_t {
 int32_t dropped_length; /*<  Spool dropped length*/
 int8_t rotating_direction; /*<  Spool rotating direction and power, pos down, neg up*/
}) mavlink_payload_spool_status_t;

#define MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN 5
#define MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN 5
#define MAVLINK_MSG_ID_273_LEN 5
#define MAVLINK_MSG_ID_273_MIN_LEN 5

#define MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC 114
#define MAVLINK_MSG_ID_273_CRC 114



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_SPOOL_STATUS { \
    273, \
    "PAYLOAD_SPOOL_STATUS", \
    2, \
    {  { "rotating_direction", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_payload_spool_status_t, rotating_direction) }, \
         { "dropped_length", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_payload_spool_status_t, dropped_length) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_SPOOL_STATUS { \
    "PAYLOAD_SPOOL_STATUS", \
    2, \
    {  { "rotating_direction", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_payload_spool_status_t, rotating_direction) }, \
         { "dropped_length", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_payload_spool_status_t, dropped_length) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_spool_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rotating_direction  Spool rotating direction and power, pos down, neg up
 * @param dropped_length  Spool dropped length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_spool_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t rotating_direction, int32_t dropped_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN];
    _mav_put_int32_t(buf, 0, dropped_length);
    _mav_put_int8_t(buf, 4, rotating_direction);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN);
#else
    mavlink_payload_spool_status_t packet;
    packet.dropped_length = dropped_length;
    packet.rotating_direction = rotating_direction;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
}

/**
 * @brief Pack a payload_spool_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rotating_direction  Spool rotating direction and power, pos down, neg up
 * @param dropped_length  Spool dropped length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_spool_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t rotating_direction,int32_t dropped_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN];
    _mav_put_int32_t(buf, 0, dropped_length);
    _mav_put_int8_t(buf, 4, rotating_direction);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN);
#else
    mavlink_payload_spool_status_t packet;
    packet.dropped_length = dropped_length;
    packet.rotating_direction = rotating_direction;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
}

/**
 * @brief Encode a payload_spool_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_spool_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_spool_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_spool_status_t* payload_spool_status)
{
    return mavlink_msg_payload_spool_status_pack(system_id, component_id, msg, payload_spool_status->rotating_direction, payload_spool_status->dropped_length);
}

/**
 * @brief Encode a payload_spool_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_spool_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_spool_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_spool_status_t* payload_spool_status)
{
    return mavlink_msg_payload_spool_status_pack_chan(system_id, component_id, chan, msg, payload_spool_status->rotating_direction, payload_spool_status->dropped_length);
}

/**
 * @brief Send a payload_spool_status message
 * @param chan MAVLink channel to send the message
 *
 * @param rotating_direction  Spool rotating direction and power, pos down, neg up
 * @param dropped_length  Spool dropped length
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_spool_status_send(mavlink_channel_t chan, int8_t rotating_direction, int32_t dropped_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN];
    _mav_put_int32_t(buf, 0, dropped_length);
    _mav_put_int8_t(buf, 4, rotating_direction);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS, buf, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
#else
    mavlink_payload_spool_status_t packet;
    packet.dropped_length = dropped_length;
    packet.rotating_direction = rotating_direction;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
#endif
}

/**
 * @brief Send a payload_spool_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_spool_status_send_struct(mavlink_channel_t chan, const mavlink_payload_spool_status_t* payload_spool_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_spool_status_send(chan, payload_spool_status->rotating_direction, payload_spool_status->dropped_length);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS, (const char *)payload_spool_status, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_spool_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t rotating_direction, int32_t dropped_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dropped_length);
    _mav_put_int8_t(buf, 4, rotating_direction);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS, buf, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
#else
    mavlink_payload_spool_status_t *packet = (mavlink_payload_spool_status_t *)msgbuf;
    packet->dropped_length = dropped_length;
    packet->rotating_direction = rotating_direction;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_SPOOL_STATUS UNPACKING


/**
 * @brief Get field rotating_direction from payload_spool_status message
 *
 * @return  Spool rotating direction and power, pos down, neg up
 */
static inline int8_t mavlink_msg_payload_spool_status_get_rotating_direction(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  4);
}

/**
 * @brief Get field dropped_length from payload_spool_status message
 *
 * @return  Spool dropped length
 */
static inline int32_t mavlink_msg_payload_spool_status_get_dropped_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Decode a payload_spool_status message into a struct
 *
 * @param msg The message to decode
 * @param payload_spool_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_spool_status_decode(const mavlink_message_t* msg, mavlink_payload_spool_status_t* payload_spool_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_spool_status->dropped_length = mavlink_msg_payload_spool_status_get_dropped_length(msg);
    payload_spool_status->rotating_direction = mavlink_msg_payload_spool_status_get_rotating_direction(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN;
        memset(payload_spool_status, 0, MAVLINK_MSG_ID_PAYLOAD_SPOOL_STATUS_LEN);
    memcpy(payload_spool_status, _MAV_PAYLOAD(msg), len);
#endif
}
