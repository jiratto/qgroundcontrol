#pragma once
// MESSAGE MULTI_BATTERY_STATUS PACKING

#define MAVLINK_MSG_ID_MULTI_BATTERY_STATUS 269

MAVPACKED(
typedef struct __mavlink_multi_battery_status_t {
 uint16_t voltage_battery_1; /*< [mV] 1st Battery voltage, in millivolts (1 = 1 millivolt)*/
 int16_t current_battery_1; /*< [cA] 1st Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current*/
 uint16_t voltage_battery_2; /*< [mV] 2nd Battery voltage, in millivolts (1 = 1 millivolt)*/
 int16_t current_battery_2; /*< [cA] 2nd Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current*/
 int8_t battery_remaining_1; /*< [%] 1st Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery*/
 int8_t battery_remaining_2; /*< [%] 2nd Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery*/
}) mavlink_multi_battery_status_t;

#define MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN 10
#define MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN 10
#define MAVLINK_MSG_ID_269_LEN 10
#define MAVLINK_MSG_ID_269_MIN_LEN 10

#define MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC 83
#define MAVLINK_MSG_ID_269_CRC 83



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MULTI_BATTERY_STATUS { \
    269, \
    "MULTI_BATTERY_STATUS", \
    6, \
    {  { "voltage_battery_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_multi_battery_status_t, voltage_battery_1) }, \
         { "current_battery_1", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_multi_battery_status_t, current_battery_1) }, \
         { "battery_remaining_1", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_multi_battery_status_t, battery_remaining_1) }, \
         { "voltage_battery_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_multi_battery_status_t, voltage_battery_2) }, \
         { "current_battery_2", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_multi_battery_status_t, current_battery_2) }, \
         { "battery_remaining_2", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_multi_battery_status_t, battery_remaining_2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MULTI_BATTERY_STATUS { \
    "MULTI_BATTERY_STATUS", \
    6, \
    {  { "voltage_battery_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_multi_battery_status_t, voltage_battery_1) }, \
         { "current_battery_1", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_multi_battery_status_t, current_battery_1) }, \
         { "battery_remaining_1", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_multi_battery_status_t, battery_remaining_1) }, \
         { "voltage_battery_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_multi_battery_status_t, voltage_battery_2) }, \
         { "current_battery_2", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_multi_battery_status_t, current_battery_2) }, \
         { "battery_remaining_2", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_multi_battery_status_t, battery_remaining_2) }, \
         } \
}
#endif

/**
 * @brief Pack a multi_battery_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param voltage_battery_1 [mV] 1st Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery_1 [cA] 1st Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param battery_remaining_1 [%] 1st Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 * @param voltage_battery_2 [mV] 2nd Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery_2 [cA] 2nd Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param battery_remaining_2 [%] 2nd Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_multi_battery_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t voltage_battery_1, int16_t current_battery_1, int8_t battery_remaining_1, uint16_t voltage_battery_2, int16_t current_battery_2, int8_t battery_remaining_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage_battery_1);
    _mav_put_int16_t(buf, 2, current_battery_1);
    _mav_put_uint16_t(buf, 4, voltage_battery_2);
    _mav_put_int16_t(buf, 6, current_battery_2);
    _mav_put_int8_t(buf, 8, battery_remaining_1);
    _mav_put_int8_t(buf, 9, battery_remaining_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN);
#else
    mavlink_multi_battery_status_t packet;
    packet.voltage_battery_1 = voltage_battery_1;
    packet.current_battery_1 = current_battery_1;
    packet.voltage_battery_2 = voltage_battery_2;
    packet.current_battery_2 = current_battery_2;
    packet.battery_remaining_1 = battery_remaining_1;
    packet.battery_remaining_2 = battery_remaining_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MULTI_BATTERY_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
}

/**
 * @brief Pack a multi_battery_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voltage_battery_1 [mV] 1st Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery_1 [cA] 1st Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param battery_remaining_1 [%] 1st Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 * @param voltage_battery_2 [mV] 2nd Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery_2 [cA] 2nd Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param battery_remaining_2 [%] 2nd Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_multi_battery_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t voltage_battery_1,int16_t current_battery_1,int8_t battery_remaining_1,uint16_t voltage_battery_2,int16_t current_battery_2,int8_t battery_remaining_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage_battery_1);
    _mav_put_int16_t(buf, 2, current_battery_1);
    _mav_put_uint16_t(buf, 4, voltage_battery_2);
    _mav_put_int16_t(buf, 6, current_battery_2);
    _mav_put_int8_t(buf, 8, battery_remaining_1);
    _mav_put_int8_t(buf, 9, battery_remaining_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN);
#else
    mavlink_multi_battery_status_t packet;
    packet.voltage_battery_1 = voltage_battery_1;
    packet.current_battery_1 = current_battery_1;
    packet.voltage_battery_2 = voltage_battery_2;
    packet.current_battery_2 = current_battery_2;
    packet.battery_remaining_1 = battery_remaining_1;
    packet.battery_remaining_2 = battery_remaining_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MULTI_BATTERY_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
}

/**
 * @brief Encode a multi_battery_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param multi_battery_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_multi_battery_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_multi_battery_status_t* multi_battery_status)
{
    return mavlink_msg_multi_battery_status_pack(system_id, component_id, msg, multi_battery_status->voltage_battery_1, multi_battery_status->current_battery_1, multi_battery_status->battery_remaining_1, multi_battery_status->voltage_battery_2, multi_battery_status->current_battery_2, multi_battery_status->battery_remaining_2);
}

/**
 * @brief Encode a multi_battery_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param multi_battery_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_multi_battery_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_multi_battery_status_t* multi_battery_status)
{
    return mavlink_msg_multi_battery_status_pack_chan(system_id, component_id, chan, msg, multi_battery_status->voltage_battery_1, multi_battery_status->current_battery_1, multi_battery_status->battery_remaining_1, multi_battery_status->voltage_battery_2, multi_battery_status->current_battery_2, multi_battery_status->battery_remaining_2);
}

/**
 * @brief Send a multi_battery_status message
 * @param chan MAVLink channel to send the message
 *
 * @param voltage_battery_1 [mV] 1st Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery_1 [cA] 1st Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param battery_remaining_1 [%] 1st Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 * @param voltage_battery_2 [mV] 2nd Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery_2 [cA] 2nd Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param battery_remaining_2 [%] 2nd Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_multi_battery_status_send(mavlink_channel_t chan, uint16_t voltage_battery_1, int16_t current_battery_1, int8_t battery_remaining_1, uint16_t voltage_battery_2, int16_t current_battery_2, int8_t battery_remaining_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage_battery_1);
    _mav_put_int16_t(buf, 2, current_battery_1);
    _mav_put_uint16_t(buf, 4, voltage_battery_2);
    _mav_put_int16_t(buf, 6, current_battery_2);
    _mav_put_int8_t(buf, 8, battery_remaining_1);
    _mav_put_int8_t(buf, 9, battery_remaining_2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS, buf, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
#else
    mavlink_multi_battery_status_t packet;
    packet.voltage_battery_1 = voltage_battery_1;
    packet.current_battery_1 = current_battery_1;
    packet.voltage_battery_2 = voltage_battery_2;
    packet.current_battery_2 = current_battery_2;
    packet.battery_remaining_1 = battery_remaining_1;
    packet.battery_remaining_2 = battery_remaining_2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS, (const char *)&packet, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
#endif
}

/**
 * @brief Send a multi_battery_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_multi_battery_status_send_struct(mavlink_channel_t chan, const mavlink_multi_battery_status_t* multi_battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_multi_battery_status_send(chan, multi_battery_status->voltage_battery_1, multi_battery_status->current_battery_1, multi_battery_status->battery_remaining_1, multi_battery_status->voltage_battery_2, multi_battery_status->current_battery_2, multi_battery_status->battery_remaining_2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS, (const char *)multi_battery_status, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_multi_battery_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t voltage_battery_1, int16_t current_battery_1, int8_t battery_remaining_1, uint16_t voltage_battery_2, int16_t current_battery_2, int8_t battery_remaining_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, voltage_battery_1);
    _mav_put_int16_t(buf, 2, current_battery_1);
    _mav_put_uint16_t(buf, 4, voltage_battery_2);
    _mav_put_int16_t(buf, 6, current_battery_2);
    _mav_put_int8_t(buf, 8, battery_remaining_1);
    _mav_put_int8_t(buf, 9, battery_remaining_2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS, buf, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
#else
    mavlink_multi_battery_status_t *packet = (mavlink_multi_battery_status_t *)msgbuf;
    packet->voltage_battery_1 = voltage_battery_1;
    packet->current_battery_1 = current_battery_1;
    packet->voltage_battery_2 = voltage_battery_2;
    packet->current_battery_2 = current_battery_2;
    packet->battery_remaining_1 = battery_remaining_1;
    packet->battery_remaining_2 = battery_remaining_2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS, (const char *)packet, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE MULTI_BATTERY_STATUS UNPACKING


/**
 * @brief Get field voltage_battery_1 from multi_battery_status message
 *
 * @return [mV] 1st Battery voltage, in millivolts (1 = 1 millivolt)
 */
static inline uint16_t mavlink_msg_multi_battery_status_get_voltage_battery_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field current_battery_1 from multi_battery_status message
 *
 * @return [cA] 1st Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 */
static inline int16_t mavlink_msg_multi_battery_status_get_current_battery_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field battery_remaining_1 from multi_battery_status message
 *
 * @return [%] 1st Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 */
static inline int8_t mavlink_msg_multi_battery_status_get_battery_remaining_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  8);
}

/**
 * @brief Get field voltage_battery_2 from multi_battery_status message
 *
 * @return [mV] 2nd Battery voltage, in millivolts (1 = 1 millivolt)
 */
static inline uint16_t mavlink_msg_multi_battery_status_get_voltage_battery_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field current_battery_2 from multi_battery_status message
 *
 * @return [cA] 2nd Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 */
static inline int16_t mavlink_msg_multi_battery_status_get_current_battery_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field battery_remaining_2 from multi_battery_status message
 *
 * @return [%] 2nd Battery remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery
 */
static inline int8_t mavlink_msg_multi_battery_status_get_battery_remaining_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  9);
}

/**
 * @brief Decode a multi_battery_status message into a struct
 *
 * @param msg The message to decode
 * @param multi_battery_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_multi_battery_status_decode(const mavlink_message_t* msg, mavlink_multi_battery_status_t* multi_battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    multi_battery_status->voltage_battery_1 = mavlink_msg_multi_battery_status_get_voltage_battery_1(msg);
    multi_battery_status->current_battery_1 = mavlink_msg_multi_battery_status_get_current_battery_1(msg);
    multi_battery_status->voltage_battery_2 = mavlink_msg_multi_battery_status_get_voltage_battery_2(msg);
    multi_battery_status->current_battery_2 = mavlink_msg_multi_battery_status_get_current_battery_2(msg);
    multi_battery_status->battery_remaining_1 = mavlink_msg_multi_battery_status_get_battery_remaining_1(msg);
    multi_battery_status->battery_remaining_2 = mavlink_msg_multi_battery_status_get_battery_remaining_2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN? msg->len : MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN;
        memset(multi_battery_status, 0, MAVLINK_MSG_ID_MULTI_BATTERY_STATUS_LEN);
    memcpy(multi_battery_status, _MAV_PAYLOAD(msg), len);
#endif
}
