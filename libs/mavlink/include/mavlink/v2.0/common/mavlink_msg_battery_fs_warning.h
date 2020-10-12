#pragma once
// MESSAGE BATTERY_FS_WARNING PACKING

#define MAVLINK_MSG_ID_BATTERY_FS_WARNING 272

MAVPACKED(
typedef struct __mavlink_battery_fs_warning_t {
 uint8_t battery_fs; /*<  Battery failsafe status*/
}) mavlink_battery_fs_warning_t;

#define MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN 1
#define MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN 1
#define MAVLINK_MSG_ID_272_LEN 1
#define MAVLINK_MSG_ID_272_MIN_LEN 1

#define MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC 46
#define MAVLINK_MSG_ID_272_CRC 46



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BATTERY_FS_WARNING { \
    272, \
    "BATTERY_FS_WARNING", \
    1, \
    {  { "battery_fs", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_battery_fs_warning_t, battery_fs) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BATTERY_FS_WARNING { \
    "BATTERY_FS_WARNING", \
    1, \
    {  { "battery_fs", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_battery_fs_warning_t, battery_fs) }, \
         } \
}
#endif

/**
 * @brief Pack a battery_fs_warning message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_fs  Battery failsafe status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_fs_warning_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t battery_fs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN];
    _mav_put_uint8_t(buf, 0, battery_fs);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN);
#else
    mavlink_battery_fs_warning_t packet;
    packet.battery_fs = battery_fs;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_FS_WARNING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
}

/**
 * @brief Pack a battery_fs_warning message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_fs  Battery failsafe status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_fs_warning_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t battery_fs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN];
    _mav_put_uint8_t(buf, 0, battery_fs);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN);
#else
    mavlink_battery_fs_warning_t packet;
    packet.battery_fs = battery_fs;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_FS_WARNING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
}

/**
 * @brief Encode a battery_fs_warning struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery_fs_warning C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_fs_warning_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_fs_warning_t* battery_fs_warning)
{
    return mavlink_msg_battery_fs_warning_pack(system_id, component_id, msg, battery_fs_warning->battery_fs);
}

/**
 * @brief Encode a battery_fs_warning struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_fs_warning C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_fs_warning_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_fs_warning_t* battery_fs_warning)
{
    return mavlink_msg_battery_fs_warning_pack_chan(system_id, component_id, chan, msg, battery_fs_warning->battery_fs);
}

/**
 * @brief Send a battery_fs_warning message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_fs  Battery failsafe status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_fs_warning_send(mavlink_channel_t chan, uint8_t battery_fs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN];
    _mav_put_uint8_t(buf, 0, battery_fs);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_FS_WARNING, buf, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
#else
    mavlink_battery_fs_warning_t packet;
    packet.battery_fs = battery_fs;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_FS_WARNING, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
#endif
}

/**
 * @brief Send a battery_fs_warning message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_battery_fs_warning_send_struct(mavlink_channel_t chan, const mavlink_battery_fs_warning_t* battery_fs_warning)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_battery_fs_warning_send(chan, battery_fs_warning->battery_fs);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_FS_WARNING, (const char *)battery_fs_warning, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
#endif
}

#if MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_fs_warning_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t battery_fs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, battery_fs);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_FS_WARNING, buf, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
#else
    mavlink_battery_fs_warning_t *packet = (mavlink_battery_fs_warning_t *)msgbuf;
    packet->battery_fs = battery_fs;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_FS_WARNING, (const char *)packet, MAVLINK_MSG_ID_BATTERY_FS_WARNING_MIN_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN, MAVLINK_MSG_ID_BATTERY_FS_WARNING_CRC);
#endif
}
#endif

#endif

// MESSAGE BATTERY_FS_WARNING UNPACKING


/**
 * @brief Get field battery_fs from battery_fs_warning message
 *
 * @return  Battery failsafe status
 */
static inline uint8_t mavlink_msg_battery_fs_warning_get_battery_fs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a battery_fs_warning message into a struct
 *
 * @param msg The message to decode
 * @param battery_fs_warning C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_fs_warning_decode(const mavlink_message_t* msg, mavlink_battery_fs_warning_t* battery_fs_warning)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    battery_fs_warning->battery_fs = mavlink_msg_battery_fs_warning_get_battery_fs(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN? msg->len : MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN;
        memset(battery_fs_warning, 0, MAVLINK_MSG_ID_BATTERY_FS_WARNING_LEN);
    memcpy(battery_fs_warning, _MAV_PAYLOAD(msg), len);
#endif
}
