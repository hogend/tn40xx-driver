
#ifndef _TLK10232_H
#define _TLK10232_H

#define GLOBAL_CONTROL_1					0	/* 0x1e */
#define	GLOBAL_RESET						0x8000

#define CHANNEL_CONTROL_1					0x1	/* 0x1e */
#define HS_SERDES_CONTROL_1					0x2	/* 0x1e */
#define HS_SERDES_CONTROL_2					0x3	/* 0x1e */
#define HS_SERDES_CONTROL_3					0x4	/* 0x1e */
#define HS_SERDES_CONTROL_4					0x5	/* 0x1e */
#define LS_SERDES_CONTROL_1					0x6	/* 0x1e */
#define LS_LANE_0							0x1
#define LS_LANE_1							0x2
#define LS_LANE_2							0x4
#define LS_LANE_3							0x8
#define LS_SERDES_CONTROL_2					0x7	/* 0x1e */
#define LS_SERDES_CONTROL_3					0x8	/* 0x1e */
#define HS_OVERLAY_CONTROL					0x9	/* 0x1e */
#define LS_OVERLAY_CONTROL					0xa	/* 0x1e */
#define LOOPBACK_TP_CONTROL					0xb	/* 0x1e */
#define LS_CONFIG_CONTROL					0xc	/* 0x1e */
#define TI_RESERVED_STATUS_7
#define CLK_CONTROL							0xd	/* 0x1e */
#define RESET_CONTROL						0xe	/* 0x1e */
#define CHANNEL_STATUS_1					0xf	/* 0x1e */
#define HS_ERROR_COUNTER					0x10	/* 0x1e */
#define LS_LN0_ERROR_COUNTER				0x11	/* 0x1e */
#define LS_LN1_ERROR_COUNTER				0x12	/* 0x1e */
#define LS_LN2_ERROR_COUNTER				0x13	/* 0x1e */
#define LS_LN3_ERROR_COUNTER				0x14	/* 0x1e */
#define LN3_LS_STATUS_1
#define LN2_LS_STATUS_1
#define LN1_LS_STATUS_1
#define LN0_LS_STATUS_1
#define HS_STATUS_1							0x16	/* 0x1e */
#define DST_CONTROL_1						0x17	/* 0x1e */
#define DST_CONTROL_2						0x18	/* 0x1e */
#define DSR_CONTROL_1						0x19	/* 0x1e */
#define DSR_CONTROL_2						0x1a	/* 0x1e */
#define DATA_SWITCH_STATUS					0x1b	/* 0x1e */
#define LS_CH_CONTROL_1						0x1C	/* 0x1e */
#define HS_CH_CONTROL_1						0x1d	/* 0x1e */
#define EXT_ADDRESS_CONTROL					0x1e	/* 0x1e */
#define EXT_ADDRESS_DATA					0x1f	/* 0x1e */
#define TI_RESERVED_CONTROL_1
#define TI_RESERVED_CONTROL_2
#define TI_RESERVED_CONTROL_3
#define VS_10G_LN_ALIGN_ACODE_P				0x8003	/* 0x1e */
#define VS_10G_LN_ALIGN_ACODE_N				0x8004	/* 0x1e */
#define TI_RESERVED_CONTROL_4
#define TI_RESERVED_CONTROL_5
#define TI_RESERVED_CONTROL_6
#define TI_RESERVED_CONTROL_7
#define TI_RESERVED_CONTROL_8
#define TI_RESERVED_CONTROL_9
#define TI_RESERVED_CONTROL_10
#define TI_RESERVED_CONTROL_11
#define TI_RESERVED_CONTROL_12
#define TI_RESERVED_CONTROL_13
#define TI_RESERVED_CONTROL_14
#define TI_RESERVED_CONTROL_15
#define TI_RESERVED_STATUS_1
#define TI_RESERVED_STATUS_2
#define TI_RESERVED_STATUS_3
#define TI_RESERVED_STATUS_4
#define TI_RESERVED_CONTROL_16
#define TI_RESERVED_CONTROL_17
#define TI_RESERVED_CONTROL_18
#define TI_RESERVED_CONTROL_19
#define TI_RESERVED_CONTROL_20
#define TI_RESERVED_CONTROL_21
#define TI_RESERVED_CONTROL_22
#define AUTO_CLKOUT_CONTROL
#define TI_RESERVED_CONTROL_23
#define TI_RESERVED_CONTROL_24
#define TI_RESERVED_CONTROL_25
#define TI_RESERVED_CONTROL_26
#define MC_AUTO_CONTROL					0x8021	/* 0x1e */
#define DST_ON_CHAR_CONTROL				0x802a	/* 0x1e */
#define DST_OFF_CHAR_CONTROL			0x802b	/* 0x1e */
#define DST_STUFF_CHAR_CONTROL			0x802c	/* 0x1e */
#define DSR_ON_CHAR_CONTROL				0x802d	/* 0x1e */
#define DSR_OFF_CHAR_CONTROL			0x802e	/* 0x1e */
#define DSR_STUFF_CHAR_CONTROL			0x802f	/* 0x1e */
#define TI_RESERVED_STATUS_5
#define TI_RESERVED_STATUS_6
#define TI_RESERVED_STATUS_8
#define TI_RESERVED_STATUS_9
#define TI_RESERVED_STATUS_10
#define LATENCY_MEASURE_CONTROL			0x8040	/* 0x1e */
#define LATENCY_COUNTER_2				0x8041	/* 0x1e */
#define LATENCY_COUNTER_1				0x8042	/* 0x1e */
#define TI_RESERVED_CONTROL_27
#define TRIGGER_LOAD_CONTROL			0x8100	/* 0x1e */
#define TRIGGER_EN_CONTROL				0x8101	/* 0x1e */
#define TI_RESERVED_CONTROL_30
#define PMA_CONTROL_1					0x0	/* 0x1 */
#define PMA_STATUS_1					0x1	/* 0x1 */
#define PMA_DEV_IDENTIFIER_1			0x2	/* 0x1 */
#define PMA_DEV_IDENTIFIER_2			0x3	/* 0x1 */
#define PMA_SPEED_ABILITY				0x4	/* 0x1 */
#define PMA_DEV_PACKAGE_1				0x5	/* 0x1 */
#define PMA_DEV_PACKAGE_2				0x6	/* 0x1 */
#define PMA_STATUS_2					0x8	/* 0x1 */
#define PMA_RX_SIGNAL_DET_STATUS		0xa	/* 0x1 */
#define PMA_EXTENDED_ABILITY			0xb	/* 0x1 */
#define LT_TRAIN_CONTROL				0x96	/* 0x1 */
#define LT_TRAIN_STATUS					0x97	/* 0x1 */
#define LT_LINK_PARTNER_CONTROL			0x98	/* 0x1 */
#define LT_LINK_PARTNER_STATUS			0x99	/* 0x1 */
#define LT_LOCAL_DEVICE_CONTROL			0x9a	/* 0x1 */
#define LT_LOCAL_DEVICE_STATUS			0x9b	/* 0x1 */
#define KX_STATUS						0xa1	/* 0x1 */
#define KR_FEC_ABILITY					0xaa	/* 0x1 */
#define KR_FEC_CONTROL					0xab	/* 0x1 */
#define KR_FEC_C_COUNT_1				0xac	/* 0x1 */
#define KR_FEC_C_COUNT_2				0xad	/* 0x1 */
#define KR_FEC_UC_COUNT_1				0xae	/* 0x1 */
#define KR_FEC_UC_COUNT_2				0xaf	/* 0x1 */
#define TI_RESERVED_CONTROL_34
#define KR_VS_FIFO_CONTROL_1			0x8001	/* 0x1 */
#define KR_VS_TP_GEN_CONTROL			0x8002	/* 0x1 */
#define KR_VS_TP_VER_CONTROL			0x8003	/* 0x1 */
#define KR_VS_CTC_ERR_CODE_LN0			0x8005	/* 0x1 */
#define KR_VS_CTC_ERR_CODE_LN1			0x8006	/* 0x1 */
#define KR_VS_CTC_ERR_CODE_LN2			0x8007	/* 0x1 */
#define KR_VS_CTC_ERR_CODE_LN3			0x8008	/* 0x1 */
#define KR_VS_LN0_EOP_ERROR_COUNTER		0x8010	/* 0x1 */
#define KR_VS_LN1_EOP_ERROR_COUNTER		0x8011	/* 0x1 */
#define KR_VS_LN2_EOP_ERROR_COUNTER		0x8012	/* 0x1 */
#define KR_VS_LN3_EOP_ERROR_COUNTER		0x8013	/* 0x1 */
#define KR_VS_TX_CTC_DROP_COUNT			0x8014	/* 0x1 */
#define KR_VS_TX_CTC_INSERT_COUNT		0x8015	/* 0x1 */
#define KR_VS_RX_CTC_DROP_COUNT			0x8016	/* 0x1 */
#define KR_VS_RX_CTC_INSERT_COUNT		0x8017	/* 0x1 */
#define KR_VS_STATUS_1					0x8018	/* 0x1 */
#define KR_VS_TX_CRCJ_ERR_COUNT_1		0x8019	/* 0x1 */
#define KR_VS_TX_CRCJ_ERR_COUNT_2		0x801a	/* 0x1 */
#define KR_VS_TX_LN0_HLM_ERR_COUNT		0x801b	/* 0x1 */
#define KR_VS_TX_LN1_HLM_ERR_COUNT		0x801c	/* 0x1 */
#define KR_VS_TX_LN2_HLM_ERR_COUNT		0x801d	/* 0x1 */
#define KR_VS_TX_LN3_HLM_ERR_COUNT		0x801e	/* 0x1 */
#define TI_RESERVED_STATUS_22
#define TI_RESERVED_STATUS_23
#define TI_RESERVED_STATUS_24
#define TI_RESERVED_STATUS_25
#define TI_RESERVED_STATUS_26
#define TI_RESERVED_STATUS_27
#define TI_RESERVED_CONTROL_35
#define TI_RESERVED_CONTROL_36
#define TI_RESERVED_CONTROL_37
#define TI_RESERVED_CONTROL_38
#define TI_RESERVED_CONTROL_39
#define TI_RESERVED_CONTROL_40
#define TI_RESERVED_CONTROL_41
#define TI_RESERVED_CONTROL_42
#define TI_RESERVED_CONTROL_43
#define TI_RESERVED_CONTROL_44
#define TI_RESERVED_CONTROL_45
#define TI_RESERVED_CONTROL_46
#define TI_RESERVED_CONTROL_47
#define TI_RESERVED_CONTROL_48
#define TI_RESERVED_CONTROL_49
#define TI_RESERVED_CONTROL_50
#define TI_RESERVED_CONTROL_51
#define TI_RESERVED_CONTROL_52
#define TI_RESERVED_STATUS_28
#define TI_RESERVED_STATUS_29
#define TI_RESERVED_STATUS_30
#define TI_RESERVED_STATUS_31
#define TI_RESERVED_STATUS_32
#define TI_RESERVED_STATUS_33
#define TI_RESERVED_STATUS_34
#define TI_RESERVED_STATUS_35
#define TI_RESERVED_STATUS_36
#define TI_RESERVED_STATUS_37
#define PCS_CONTROL						0	/* 0x3 */
#define PCS_STATUS_1					0x1	/* 0x3 */
#define PCS_STATUS_2					0x8	/* 0x3 */
#define KR_PCS_STATUS_1					0x20	/* 0x3 */
#define KR_PCS_STATUS_2					0x21	/* 0x3 */
#define PCS_TP_SEED_A0					0x22	/* 0x3 */
#define PCS_TP_SEED_A1					0x23	/* 0x3 */
#define PCS_TP_SEED_A2					0x24	/* 0x3 */
#define PCS_TP_SEED_A3					0x25	/* 0x3 */
#define PCS_TP_SEED_B0					0x26	/* 0x3 */
#define PCS_TP_SEED_B1					0x27	/* 0x3 */
#define PCS_TP_SEED_B2					0x28	/* 0x3 */
#define PCS_TP_SEED_B3					0x29	/* 0x3 */
#define PCS_TP_CONTROL					0x2a	/* 0x3 */
#define PCS_TP_ERR_COUNT				0x2b	/* 0x3 */
#define PCS_VS_CONTROL					0x8000	/* 0x3 */
#define PCS_VS_STATUS					0x8010	/* 0x3 */
#define AN_CONTROL						0	/* 0x7 */
#define AN_STATUS						0x1	/* 0x7 */
#define AN_DEV_PACKAGE					0x5	/* 0x7 */
#define AN_ADVERTISEMENT_1				0x10	/* 0x7 */
#define AN_ADVERTISEMENT_2				0x11	/* 0x7 */
#define AN_ADVERTISEMENT_3				0x12	/* 0x7 */
#define AN_LP_ADVERTISEMENT_1			0x13	/* 0x7 */
#define AN_LP_ADVERTISEMENT_2			0x14	/* 0x7 */
#define AN_LP_ADVERTISEMENT_3			0x15	/* 0x7 */
#define AN_XNP_TRANSMIT_1				0x16	/* 0x7 */
#define AN_XNP_TRANSMIT_2				0x17	/* 0x7 */
#define AN_XNP_TRANSMIT_3				0x18	/* 0x7 */
#define AN_LP_XNP_ABILITY_1				0x19	/* 0x7 */
#define AN_LP_XNP_ABILITY_2				0x1a	/* 0x7 */
#define AN_LP_XNP_ABILITY_3				0x1b	/* 0x7 */
#define AN_BP_STATUS					0x30	/* 0x7 */
#define AN_VS_CONTROL

#define REGISTER_00
#define REGISTER_01
#define REGISTER_02
#define REGISTER_04
#define REGISTER_05
#define REGISTER_06
#define REGISTER_0C
#define REGISTER_0D
#define REGISTER_0E

#define GLOBAL_CONTROL_01
#define CHANNEL_CONTROL_01
#define RESERVED_1
#define TX_SWING_CONTROL
#define RESERVED_2
#define TP_CONTROL
#define LANE_CONFIG_CONTROL
#define LAS_BER_TIMER_CONTROL_1
#define CHANNEL_STATUS_01
#define CRPAT_ERROR_COUNTER
#define LN0_ERROR_COUNTER
#define LN1_ERROR_COUNTER
#define LN2_ERROR_COUNTER
#define LN3_ERROR_COUNTER
#define LN0_TRANSCEIVER_STATUS
#define LN1_TRANSCEIVER_STATUS
#define LN2_TRANSCEIVER_STATUS
#define LN3_TRANSCEIVER_STATUS
#define CHANNEL_STATUS_02

#define CLK_REGISTER_0
#define CLK_REGISTER_1
#define CLK_REGISTER_2
#define CLK_REGISTER_3
#define CLK_REGISTER_4
#define CLK_REGISTER_5
#define CLK_REGISTER_6
#define CLK_REGISTER_7
#define CLK_REGISTER_8
#define CLK_REGISTER_9
#define CLK_REGISTER_10
#define CLK_REGISTER_11
#define CLK_REGISTER_12
#define CLK_REGISTER_13
#define CLK_REGISTER_14
#define CLK_REGISTER_15
#define CLK_REGISTER_16
#define CLK_REGISTER_17
#define CLK_REGISTER_18
#define CLK_REGISTER_19
#define CLK_REGISTER_20

#endif /* _TLK10232_H */
