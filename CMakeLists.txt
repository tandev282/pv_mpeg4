# Apache-2.0 PacketVideo MPEG-4 Part 2 decoder, pinned in source-lock.json.
# Sources match upstream Android.bp; no encoder or Android framework dependency.
set(PV_DECODER_SOURCES
    bitstream block_idct cal_dc_scaler combined_decode conceal datapart_decode
    dcac_prediction dec_pred_intra_dc get_pred_adv_b_add get_pred_outside idct
    idct_vca mb_motion_comp mb_utils packet_util post_filter pvdec_api scaling_tab
    vlc_decode vlc_dequant vlc_tab vop zigzag_tab)
list(TRANSFORM PV_DECODER_SOURCES PREPEND "${CMAKE_CURRENT_LIST_DIR}/upstream/src/")
list(TRANSFORM PV_DECODER_SOURCES APPEND ".cpp")
add_library(xiaozhi_pv_mpeg4 STATIC ${PV_DECODER_SOURCES})
target_include_directories(xiaozhi_pv_mpeg4 PUBLIC "upstream/include" PRIVATE "upstream/src" "port")
target_link_libraries(xiaozhi_pv_mpeg4 PRIVATE idf::log)
target_compile_options(xiaozhi_pv_mpeg4 PRIVATE -std=gnu++17 -O2 -fno-strict-aliasing -Wno-error)
