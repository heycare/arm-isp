//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT [2018] ARM Limited or its affiliates.
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#if !defined(__FSM_PARAM_ID_H__)
#define __FSM_PARAM_ID_H__


typedef enum {
    FSM_PARAM_SET_MIN_ID,

    /* SENSOR */
    FSM_PARAM_SET_SENSOR_START,
    FSM_PARAM_SET_SENSOR_STREAMING,
    FSM_PARAM_SET_SENSOR_PRESET_MODE,
    FSM_PARAM_SET_SENSOR_INFO_PRESET_NUM,
    FSM_PARAM_SET_SENSOR_ALLOC_ANALOG_GAIN,
    FSM_PARAM_SET_SENSOR_ALLOC_DIGITAL_GAIN,
    FSM_PARAM_SET_SENSOR_ALLOC_INTEGRATION_TIME,
    FSM_PARAM_SET_SENSOR_UPDATE,
    FSM_PARAM_SET_SENSOR_REG,
    FSM_PARAM_SET_SENSOR_END,

    /* CMOS */
    FSM_PARAM_SET_CMOS_START,
    FSM_PARAM_SET_EXPOSURE_TARGET,
    FSM_PARAM_SET_AE_MODE,
    FSM_PARAM_SET_MANUAL_GAIN,
    FSM_PARAM_SET_CMOS_ADJUST_EXP,
    FSM_PARAM_SET_CMOS_SPLIT_STRATEGY,
    FSM_PARAM_SET_CMOS_END,

    /* GENERAL */
    FSM_PARAM_SET_GENERAL_START,
    FSM_PARAM_SET_RELOAD_CALIBRATION,
    FSM_PARAM_SET_WDR_MODE,
    FSM_PARAM_SET_REG_SETTING,
    FSM_PARAM_SET_SCENE_MODE,
    FSM_PARAM_SET_TEMPER_MODE,
    FSM_PARAM_SET_GENERAL_END,

    /* AE */
    FSM_PARAM_SET_AE_START,
    FSM_PARAM_SET_AE_INIT,
    FSM_PARAM_SET_AE_STATS,
    FSM_PARAM_SET_AE_ROI,
    FSM_PARAM_SET_AE_ADJUST_EXP,
    FSM_PARAM_SET_AE_END,

    /* AWB */
    FSM_PARAM_SET_AWB_START,
    FSM_PARAM_SET_AWB_STATS,
    FSM_PARAM_SET_AWB_MODE,
    FSM_PARAM_SET_AWB_INFO,
    FSM_PARAM_SET_AWB_END,

    /* COLOR_MATRIX */
    FSM_PARAM_SET_COLOR_MATRIX_START,
    FSM_PARAM_SET_CCM_INFO,
    FSM_PARAM_SET_CCM_CHANGE,
    FSM_PARAM_SET_SHADING_MESH_RELOAD,
    FSM_PARAM_SET_MANUAL_CCM,
    FSM_PARAM_SET_COLOR_MATRIX_END,

    /* IRIDIX */
    FSM_PARAM_SET_IRIDIX_START,
    FSM_PARAM_SET_IRIDIX_INIT,
    FSM_PARAM_SET_IRIDIX_END,

    /* MATRIX_YUV */
    FSM_PARAM_SET_MATRIX_YUV_START,
    FSM_PARAM_SET_MATRIX_YUV_FR_OUT_FMT,
    FSM_PARAM_SET_MATRIX_YUV_DS1_OUT_FMT,
    FSM_PARAM_SET_MATRIX_YUV_SATURATION_STRENGTH,
    FSM_PARAM_SET_MATRIX_YUV_HUE_THETA,
    FSM_PARAM_SET_MATRIX_YUV_BRIGHTNESS_STRENGTH,
    FSM_PARAM_SET_MATRIX_YUV_CONTRAST_STRENGTH,
    FSM_PARAM_SET_MATRIX_YUV_COLOR_MODE,
    FSM_PARAM_SET_MATRIX_YUV_END,

    /* GAMMA_CONTRAST */
    FSM_PARAM_SET_GAMMA_CONTRAST_START,
    FSM_PARAM_SET_GAMMA_STATS,
    FSM_PARAM_SET_GAMMA_CONTRAST_END,

    /* AF */
    FSM_PARAM_SET_AF_START,
    FSM_PARAM_SET_AF_MODE,
    FSM_PARAM_SET_AF_MANUAL_POS,
    FSM_PARAM_SET_AF_RANGE_LOW,
    FSM_PARAM_SET_AF_RANGE_HIGH,
    FSM_PARAM_SET_AF_ROI,
    FSM_PARAM_SET_AF_STATS,
    FSM_PARAM_SET_AF_LENS_REG,
    FSM_PARAM_SET_AF_END,

    /* MONITOR */
    FSM_PARAM_SET_MONITOR_START,
    FSM_PARAM_SET_MON_ERROR_REPORT,
    FSM_PARAM_SET_MON_RESET_ERROR,
    FSM_PARAM_SET_MON_AE_FLOW,
    FSM_PARAM_SET_MON_AWB_FLOW,
    FSM_PARAM_SET_MON_GAMMA_FLOW,
    FSM_PARAM_SET_MON_IRIDIX_FLOW,
    FSM_PARAM_SET_MON_STATUS_AE,
    FSM_PARAM_SET_MON_STATUS_AWB,
    FSM_PARAM_SET_MON_STATUS_GAMMA,
    FSM_PARAM_SET_MON_STATUS_IRIDIX,
    FSM_PARAM_SET_MONITOR_END,

    /* SHARPENING */
    FSM_PARAM_SET_SHARPENING_START,
    FSM_PARAM_SET_SHARPENING_MULT,
    FSM_PARAM_SET_SHARPENING_STRENGTH,
    FSM_PARAM_SET_SHARPENING_END,

    FSM_PARAM_SET_MAX_ID,
} fsm_param_set_id_t;


typedef enum {
    FSM_PARAM_GET_MIN_ID = 10000,

    /* USER2KERNEL */
    FSM_PARAM_GET_USER2KERNEL_START,
    FSM_PARAM_GET_TOTAL_GAIN_LOG2,
    FSM_PARAM_GET_MAX_EXPOSURE_LOG2,
    FSM_PARAM_GET_KLENS_STATUS,
    FSM_PARAM_GET_KLENS_PARAM,
    FSM_PARAM_GET_KSENSOR_INFO,
    FSM_PARAM_GET_USER2KERNEL_END,

    /* SENSOR */
    FSM_PARAM_GET_SENSOR_START,
    FSM_PARAM_GET_SENSOR_INFO,
    FSM_PARAM_GET_SENSOR_LINES_SECOND,
    FSM_PARAM_GET_SENSOR_STREAMING,
    FSM_PARAM_GET_SENSOR_PARAM,
    FSM_PARAM_GET_SENSOR_INFO_PRESET_NUM,
    FSM_PARAM_GET_SENSOR_REG,
    FSM_PARAM_GET_SENSOR_ID,
    FSM_PARAM_GET_SENSOR_MAX_RESOLUTION,
    FSM_PARAM_GET_SENSOR_END,

    /* CMOS */
    FSM_PARAM_GET_CMOS_START,
    FSM_PARAM_GET_CMOS_EXPOSURE_LOG2,
    FSM_PARAM_GET_CMOS_EXPOSURE_RATIO,
    FSM_PARAM_GET_FRAME_EXPOSURE_SET,
    FSM_PARAM_GET_CMOS_TOTAL_GAIN,
    FSM_PARAM_GET_FPS,
    FSM_PARAM_GET_AE_MODE,
    FSM_PARAM_GET_GAIN,
    FSM_PARAM_GET_CMOS_EXP_WRITE_SET,
    FSM_PARAM_GET_CMOS_SPLIT_STRATEGY,
    FSM_PARAM_GET_CMOS_END,

    /* GENERAL */
    FSM_PARAM_GET_GENERAL_START,
    FSM_PARAM_GET_WDR_MODE,
    FSM_PARAM_GET_CALC_FE_LUT_OUTPUT,
    FSM_PARAM_GET_REG_SETTING,
    FSM_PARAM_GET_SCENE_MODE,
    FSM_PARAM_GET_TEMPER_MODE,
    FSM_PARAM_GET_GENERAL_END,

    /* AE */
    FSM_PARAM_GET_AE_START,
    FSM_PARAM_GET_AE_INFO,
    FSM_PARAM_GET_AE_HIST_INFO,
    FSM_PARAM_GET_AE_ROI,
    FSM_PARAM_GET_AE_END,

    /* AWB */
    FSM_PARAM_GET_AWB_START,
    FSM_PARAM_GET_AWB_INFO,
    FSM_PARAM_GET_AWB_MODE,
    FSM_PARAM_GET_AWB_END,

    /* COLOR_MATRIX */
    FSM_PARAM_GET_COLOR_MATRIX_START,
    FSM_PARAM_GET_CCM_INFO,
    FSM_PARAM_GET_SHADING_ALPHA,
    FSM_PARAM_GET_COLOR_MATRIX_END,

    /* IRIDIX */
    FSM_PARAM_GET_IRIDIX_START,
    FSM_PARAM_GET_IRIDIX_STRENGTH,
    FSM_PARAM_GET_IRIDIX_CONTRAST,
    FSM_PARAM_GET_IRIDIX_DARK_ENH,
    FSM_PARAM_GET_IRIDIX_GLOBAL_DG,
    FSM_PARAM_GET_IRIDIX_END,

    /* MATRIX_YUV */
    FSM_PARAM_GET_MATRIX_YUV_START,
    FSM_PARAM_GET_MATRIX_YUV_FR_OUT_FMT,
    FSM_PARAM_GET_MATRIX_YUV_DS1_OUT_FMT,
    FSM_PARAM_GET_MATRIX_YUV_SATURATION_STRENGTH,
    FSM_PARAM_GET_MATRIX_YUV_HUE_THETA,
    FSM_PARAM_GET_MATRIX_YUV_BRIGHTNESS_STRENGTH,
    FSM_PARAM_GET_MATRIX_YUV_CONTRAST_STRENGTH,
    FSM_PARAM_GET_MATRIX_YUV_COLOR_MODE,
    FSM_PARAM_GET_MATRIX_YUV_END,

    /* GAMMA_CONTRAST */
    FSM_PARAM_GET_GAMMA_CONTRAST_START,
    FSM_PARAM_GET_GAMMA_CONTRAST_RESULT,
    FSM_PARAM_GET_GAMMA_CONTRAST_END,

    /* AF */
    FSM_PARAM_GET_AF_START,
    FSM_PARAM_GET_AF_INFO,
    FSM_PARAM_GET_AF_MODE,
    FSM_PARAM_GET_LENS_PARAM,
    FSM_PARAM_GET_AF_MANUAL_POS,
    FSM_PARAM_GET_AF_RANGE_LOW,
    FSM_PARAM_GET_AF_RANGE_HIGH,
    FSM_PARAM_GET_AF_ROI,
    FSM_PARAM_GET_AF_LENS_REG,
    FSM_PARAM_GET_AF_LENS_STATUS,
    FSM_PARAM_GET_AF_END,

    /* MONITOR */
    FSM_PARAM_GET_MONITOR_START,
    FSM_PARAM_GET_MON_ERROR,
    FSM_PARAM_GET_MON_STATUS_AE,
    FSM_PARAM_GET_MON_STATUS_AWB,
    FSM_PARAM_GET_MON_STATUS_GAMMA,
    FSM_PARAM_GET_MON_STATUS_IRIDIX,
    FSM_PARAM_GET_MONITOR_END,

    /* SHARPENING */
    FSM_PARAM_GET_SHARPENING_START,
    FSM_PARAM_GET_SHARPENING_STRENGTH,
    FSM_PARAM_GET_SHARPENING_END,

    FSM_PARAM_GET_MAX_ID,
} fsm_param_get_id_t;


#endif
