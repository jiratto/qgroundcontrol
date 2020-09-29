#pragma once
// MESSAGE UAVH31_DATA PACKING

#define MAVLINK_MSG_ID_UAVH31_DATA 276

MAVPACKED(
typedef struct __mavlink_uavh31_data_t {
 uint16_t beam1; /*< [cm] beam1 target distance*/
 uint16_t beam2; /*< [cm] beam2 target distance*/
 uint16_t beam3; /*< [cm] beam3 target distance*/
}) mavlink_uavh31_data_t;

#define MAVLINK_MSG_ID_UAVH31_DATA_LEN 6
#define MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN 6
#define MAVLINK_MSG_ID_276_LEN 6
#define MAVLINK_MSG_ID_276_MIN_LEN 6

#define MAVLINK_MSG_ID_UAVH31_DATA_CRC 4
#define MAVLINK_MSG_ID_276_CRC 4



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UAVH31_DATA { \
    276, \
    "UAVH31_DATA", \
    3, \
    {  { "beam1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_uavh31_data_t, beam1) }, \
         { "beam2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_uavh31_data_t, beam2) }, \
         { "beam3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_uavh31_data_t, beam3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UAVH31_DATA { \
    "UAVH31_DATA", \
    3, \
    {  { "beam1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_uavh31_data_t, beam1) }, \
         { "beam2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_uavh31_data_t, beam2) }, \
         { "beam3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_uavh31_data_t, beam3) }, \
         } \
}
#endif

/**
 * @brief Pack a uavh31_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param beam1 [cm] beam1 target distance
 * @param beam2 [cm] beam2 target distance
 * @param beam3 [cm] beam3 target distance
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavh31_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t beam1, uint16_t beam2, uint16_t beam3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVH31_DATA_LEN];
    _mav_put_uint16_t(buf, 0, beam1);
    _mav_put_uint16_t(buf, 2, beam2);
    _mav_put_uint16_t(buf, 4, beam3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVH31_DATA_LEN);
#else
    mavlink_uavh31_data_t packet;
    packet.beam1 = beam1;
    packet.beam2 = beam2;
    packet.beam3 = beam3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVH31_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVH31_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
}

/**
 * @brief Pack a uavh31_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param beam1 [cm] beam1 target distance
 * @param beam2 [cm] beam2 target distance
 * @param beam3 [cm] beam3 target distance
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavh31_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t beam1,uint16_t beam2,uint16_t beam3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVH31_DATA_LEN];
    _mav_put_uint16_t(buf, 0, beam1);
    _mav_put_uint16_t(buf, 2, beam2);
    _mav_put_uint16_t(buf, 4, beam3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVH31_DATA_LEN);
#else
    mavlink_uavh31_data_t packet;
    packet.beam1 = beam1;
    packet.beam2 = beam2;
    packet.beam3 = beam3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVH31_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVH31_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
}

/**
 * @brief Encode a uavh31_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uavh31_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavh31_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uavh31_data_t* uavh31_data)
{
    return mavlink_msg_uavh31_data_pack(system_id, component_id, msg, uavh31_data->beam1, uavh31_data->beam2, uavh31_data->beam3);
}

/**
 * @brief Encode a uavh31_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uavh31_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavh31_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uavh31_data_t* uavh31_data)
{
    return mavlink_msg_uavh31_data_pack_chan(system_id, component_id, chan, msg, uavh31_data->beam1, uavh31_data->beam2, uavh31_data->beam3);
}

/**
 * @brief Send a uavh31_data message
 * @param chan MAVLink channel to send the message
 *
 * @param beam1 [cm] beam1 target distance
 * @param beam2 [cm] beam2 target distance
 * @param beam3 [cm] beam3 target distance
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uavh31_data_send(mavlink_channel_t chan, uint16_t beam1, uint16_t beam2, uint16_t beam3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVH31_DATA_LEN];
    _mav_put_uint16_t(buf, 0, beam1);
    _mav_put_uint16_t(buf, 2, beam2);
    _mav_put_uint16_t(buf, 4, beam3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVH31_DATA, buf, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
#else
    mavlink_uavh31_data_t packet;
    packet.beam1 = beam1;
    packet.beam2 = beam2;
    packet.beam3 = beam3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVH31_DATA, (const char *)&packet, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
#endif
}

/**
 * @brief Send a uavh31_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uavh31_data_send_struct(mavlink_channel_t chan, const mavlink_uavh31_data_t* uavh31_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uavh31_data_send(chan, uavh31_data->beam1, uavh31_data->beam2, uavh31_data->beam3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVH31_DATA, (const char *)uavh31_data, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_UAVH31_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uavh31_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t beam1, uint16_t beam2, uint16_t beam3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, beam1);
    _mav_put_uint16_t(buf, 2, beam2);
    _mav_put_uint16_t(buf, 4, beam3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVH31_DATA, buf, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
#else
    mavlink_uavh31_data_t *packet = (mavlink_uavh31_data_t *)msgbuf;
    packet->beam1 = beam1;
    packet->beam2 = beam2;
    packet->beam3 = beam3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVH31_DATA, (const char *)packet, MAVLINK_MSG_ID_UAVH31_DATA_MIN_LEN, MAVLINK_MSG_ID_UAVH31_DATA_LEN, MAVLINK_MSG_ID_UAVH31_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE UAVH31_DATA UNPACKING


/**
 * @brief Get field beam1 from uavh31_data message
 *
 * @return [cm] beam1 target distance
 */
static inline uint16_t mavlink_msg_uavh31_data_get_beam1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field beam2 from uavh31_data message
 *
 * @return [cm] beam2 target distance
 */
static inline uint16_t mavlink_msg_uavh31_data_get_beam2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field beam3 from uavh31_data message
 *
 * @return [cm] beam3 target distance
 */
static inline uint16_t mavlink_msg_uavh31_data_get_beam3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a uavh31_data message into a struct
 *
 * @param msg The message to decode
 * @param uavh31_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_uavh31_data_decode(const mavlink_message_t* msg, mavlink_uavh31_data_t* uavh31_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uavh31_data->beam1 = mavlink_msg_uavh31_data_get_beam1(msg);
    uavh31_data->beam2 = mavlink_msg_uavh31_data_get_beam2(msg);
    uavh31_data->beam3 = mavlink_msg_uavh31_data_get_beam3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UAVH31_DATA_LEN? msg->len : MAVLINK_MSG_ID_UAVH31_DATA_LEN;
        memset(uavh31_data, 0, MAVLINK_MSG_ID_UAVH31_DATA_LEN);
    memcpy(uavh31_data, _MAV_PAYLOAD(msg), len);
#endif
}
