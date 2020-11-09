#pragma once
// MESSAGE RANGEFINDER_ENABLED PACKING

#define MAVLINK_MSG_ID_RANGEFINDER_ENABLED 270

MAVPACKED(
typedef struct __mavlink_rangefinder_enabled_t {
 uint8_t enabled; /*<  rangefinder status*/
}) mavlink_rangefinder_enabled_t;

#define MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN 1
#define MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN 1
#define MAVLINK_MSG_ID_270_LEN 1
#define MAVLINK_MSG_ID_270_MIN_LEN 1

#define MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC 79
#define MAVLINK_MSG_ID_270_CRC 79



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RANGEFINDER_ENABLED { \
    270, \
    "RANGEFINDER_ENABLED", \
    1, \
    {  { "enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_rangefinder_enabled_t, enabled) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RANGEFINDER_ENABLED { \
    "RANGEFINDER_ENABLED", \
    1, \
    {  { "enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_rangefinder_enabled_t, enabled) }, \
         } \
}
#endif

/**
 * @brief Pack a rangefinder_enabled message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param enabled  rangefinder status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rangefinder_enabled_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN];
    _mav_put_uint8_t(buf, 0, enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN);
#else
    mavlink_rangefinder_enabled_t packet;
    packet.enabled = enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RANGEFINDER_ENABLED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
}

/**
 * @brief Pack a rangefinder_enabled message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enabled  rangefinder status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rangefinder_enabled_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN];
    _mav_put_uint8_t(buf, 0, enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN);
#else
    mavlink_rangefinder_enabled_t packet;
    packet.enabled = enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RANGEFINDER_ENABLED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
}

/**
 * @brief Encode a rangefinder_enabled struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rangefinder_enabled C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rangefinder_enabled_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rangefinder_enabled_t* rangefinder_enabled)
{
    return mavlink_msg_rangefinder_enabled_pack(system_id, component_id, msg, rangefinder_enabled->enabled);
}

/**
 * @brief Encode a rangefinder_enabled struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rangefinder_enabled C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rangefinder_enabled_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rangefinder_enabled_t* rangefinder_enabled)
{
    return mavlink_msg_rangefinder_enabled_pack_chan(system_id, component_id, chan, msg, rangefinder_enabled->enabled);
}

/**
 * @brief Send a rangefinder_enabled message
 * @param chan MAVLink channel to send the message
 *
 * @param enabled  rangefinder status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rangefinder_enabled_send(mavlink_channel_t chan, uint8_t enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN];
    _mav_put_uint8_t(buf, 0, enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGEFINDER_ENABLED, buf, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
#else
    mavlink_rangefinder_enabled_t packet;
    packet.enabled = enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGEFINDER_ENABLED, (const char *)&packet, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
#endif
}

/**
 * @brief Send a rangefinder_enabled message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rangefinder_enabled_send_struct(mavlink_channel_t chan, const mavlink_rangefinder_enabled_t* rangefinder_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rangefinder_enabled_send(chan, rangefinder_enabled->enabled);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGEFINDER_ENABLED, (const char *)rangefinder_enabled, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
#endif
}

#if MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rangefinder_enabled_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGEFINDER_ENABLED, buf, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
#else
    mavlink_rangefinder_enabled_t *packet = (mavlink_rangefinder_enabled_t *)msgbuf;
    packet->enabled = enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGEFINDER_ENABLED, (const char *)packet, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_MIN_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_CRC);
#endif
}
#endif

#endif

// MESSAGE RANGEFINDER_ENABLED UNPACKING


/**
 * @brief Get field enabled from rangefinder_enabled message
 *
 * @return  rangefinder status
 */
static inline uint8_t mavlink_msg_rangefinder_enabled_get_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a rangefinder_enabled message into a struct
 *
 * @param msg The message to decode
 * @param rangefinder_enabled C-struct to decode the message contents into
 */
static inline void mavlink_msg_rangefinder_enabled_decode(const mavlink_message_t* msg, mavlink_rangefinder_enabled_t* rangefinder_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rangefinder_enabled->enabled = mavlink_msg_rangefinder_enabled_get_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN? msg->len : MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN;
        memset(rangefinder_enabled, 0, MAVLINK_MSG_ID_RANGEFINDER_ENABLED_LEN);
    memcpy(rangefinder_enabled, _MAV_PAYLOAD(msg), len);
#endif
}
