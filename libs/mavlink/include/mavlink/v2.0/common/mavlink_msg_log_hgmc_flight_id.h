#pragma once
// MESSAGE LOG_HGMC_FLIGHT_ID PACKING

#define MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID 800

MAVPACKED(
typedef struct __mavlink_log_hgmc_flight_id_t {
 char message_to_log[32]; /*<  Message to be added to BIN log*/
}) mavlink_log_hgmc_flight_id_t;

#define MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN 32
#define MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN 32
#define MAVLINK_MSG_ID_800_LEN 32
#define MAVLINK_MSG_ID_800_MIN_LEN 32

#define MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC 5
#define MAVLINK_MSG_ID_800_CRC 5

#define MAVLINK_MSG_LOG_HGMC_FLIGHT_ID_FIELD_MESSAGE_TO_LOG_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LOG_HGMC_FLIGHT_ID { \
    800, \
    "LOG_HGMC_FLIGHT_ID", \
    1, \
    {  { "message_to_log", NULL, MAVLINK_TYPE_CHAR, 32, 0, offsetof(mavlink_log_hgmc_flight_id_t, message_to_log) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LOG_HGMC_FLIGHT_ID { \
    "LOG_HGMC_FLIGHT_ID", \
    1, \
    {  { "message_to_log", NULL, MAVLINK_TYPE_CHAR, 32, 0, offsetof(mavlink_log_hgmc_flight_id_t, message_to_log) }, \
         } \
}
#endif

/**
 * @brief Pack a log_hgmc_flight_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param message_to_log  Message to be added to BIN log
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_log_hgmc_flight_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *message_to_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN];

    _mav_put_char_array(buf, 0, message_to_log, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN);
#else
    mavlink_log_hgmc_flight_id_t packet;

    mav_array_memcpy(packet.message_to_log, message_to_log, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
}

/**
 * @brief Pack a log_hgmc_flight_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param message_to_log  Message to be added to BIN log
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_log_hgmc_flight_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *message_to_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN];

    _mav_put_char_array(buf, 0, message_to_log, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN);
#else
    mavlink_log_hgmc_flight_id_t packet;

    mav_array_memcpy(packet.message_to_log, message_to_log, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
}

/**
 * @brief Encode a log_hgmc_flight_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param log_hgmc_flight_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_log_hgmc_flight_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_log_hgmc_flight_id_t* log_hgmc_flight_id)
{
    return mavlink_msg_log_hgmc_flight_id_pack(system_id, component_id, msg, log_hgmc_flight_id->message_to_log);
}

/**
 * @brief Encode a log_hgmc_flight_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param log_hgmc_flight_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_log_hgmc_flight_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_log_hgmc_flight_id_t* log_hgmc_flight_id)
{
    return mavlink_msg_log_hgmc_flight_id_pack_chan(system_id, component_id, chan, msg, log_hgmc_flight_id->message_to_log);
}

/**
 * @brief Send a log_hgmc_flight_id message
 * @param chan MAVLink channel to send the message
 *
 * @param message_to_log  Message to be added to BIN log
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_log_hgmc_flight_id_send(mavlink_channel_t chan, const char *message_to_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN];

    _mav_put_char_array(buf, 0, message_to_log, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID, buf, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
#else
    mavlink_log_hgmc_flight_id_t packet;

    mav_array_memcpy(packet.message_to_log, message_to_log, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID, (const char *)&packet, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
#endif
}

/**
 * @brief Send a log_hgmc_flight_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_log_hgmc_flight_id_send_struct(mavlink_channel_t chan, const mavlink_log_hgmc_flight_id_t* log_hgmc_flight_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_log_hgmc_flight_id_send(chan, log_hgmc_flight_id->message_to_log);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID, (const char *)log_hgmc_flight_id, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_log_hgmc_flight_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *message_to_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, message_to_log, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID, buf, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
#else
    mavlink_log_hgmc_flight_id_t *packet = (mavlink_log_hgmc_flight_id_t *)msgbuf;

    mav_array_memcpy(packet->message_to_log, message_to_log, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID, (const char *)packet, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_MIN_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE LOG_HGMC_FLIGHT_ID UNPACKING


/**
 * @brief Get field message_to_log from log_hgmc_flight_id message
 *
 * @return  Message to be added to BIN log
 */
static inline uint16_t mavlink_msg_log_hgmc_flight_id_get_message_to_log(const mavlink_message_t* msg, char *message_to_log)
{
    return _MAV_RETURN_char_array(msg, message_to_log, 32,  0);
}

/**
 * @brief Decode a log_hgmc_flight_id message into a struct
 *
 * @param msg The message to decode
 * @param log_hgmc_flight_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_log_hgmc_flight_id_decode(const mavlink_message_t* msg, mavlink_log_hgmc_flight_id_t* log_hgmc_flight_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_log_hgmc_flight_id_get_message_to_log(msg, log_hgmc_flight_id->message_to_log);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN? msg->len : MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN;
        memset(log_hgmc_flight_id, 0, MAVLINK_MSG_ID_LOG_HGMC_FLIGHT_ID_LEN);
    memcpy(log_hgmc_flight_id, _MAV_PAYLOAD(msg), len);
#endif
}
