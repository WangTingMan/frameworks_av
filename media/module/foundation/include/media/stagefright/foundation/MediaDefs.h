/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MEDIA_DEFS_H_

#define MEDIA_DEFS_H_

namespace android {
#ifdef _MSC_VER
inline constexpr const char* MEDIA_MIMETYPE_IMAGE_JPEG = "image/jpeg";
inline constexpr const char* MEDIA_MIMETYPE_IMAGE_ANDROID_HEIC = "image/vnd.android.heic";
inline constexpr const char* MEDIA_MIMETYPE_IMAGE_AVIF = "image/avif";

inline constexpr const char* MEDIA_MIMETYPE_VIDEO_VP8 = "video/x-vnd.on2.vp8";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_VP9 = "video/x-vnd.on2.vp9";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_AV1 = "video/av01";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_AVC = "video/avc";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_HEVC = "video/hevc";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_MPEG4 = "video/mp4v-es";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_H263 = "video/3gpp";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_MPEG2 = "video/mpeg2";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_RAW = "video/raw";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_DOLBY_VISION = "video/dolby-vision";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_SCRAMBLED = "video/scrambled";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_DIVX = "video/divx";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_DIVX3 = "video/divx3";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_XVID = "video/xvid";
inline constexpr const char* MEDIA_MIMETYPE_VIDEO_MJPEG = "video/x-motion-jpeg";

inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AMR_NB = "audio/3gpp";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AMR_WB = "audio/amr-wb";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEG = "audio/mpeg";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEG_LAYER_I = "audio/mpeg-L1";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEG_LAYER_II = "audio/mpeg-L2";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MIDI = "audio/midi";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC = "audio/mp4a-latm";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_QCELP = "audio/qcelp";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_VORBIS = "audio/vorbis";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_OPUS = "audio/opus";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_G711_ALAW = "audio/g711-alaw";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_G711_MLAW = "audio/g711-mlaw";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_RAW = "audio/raw";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_FLAC = "audio/flac";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS = "audio/aac-adts";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MSGSM = "audio/gsm";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AC3 = "audio/ac3";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_EAC3 = "audio/eac3";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_EAC3_JOC = "audio/eac3-joc";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AC4 = "audio/ac4";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEGH_MHA1 = "audio/mha1";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEGH_MHM1 = "audio/mhm1";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEGH_BL_L3 = "audio/mhm1.03";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEGH_BL_L4 = "audio/mhm1.04";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEGH_LC_L3 = "audio/mhm1.0d";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MPEGH_LC_L4 = "audio/mhm1.0e";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_SCRAMBLED = "audio/scrambled";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_ALAC = "audio/alac";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_WMA = "audio/x-ms-wma";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_MS_ADPCM = "audio/x-adpcm-ms";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DVI_IMA_ADPCM = "audio/x-adpcm-dvi-ima";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DTS = "audio/vnd.dts";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DTS_HD = "audio/vnd.dts.hd";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DTS_HD_MA = "audio/vnd.dts.hd;profile=dtsma";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DTS_UHD = "audio/vnd.dts.uhd";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DTS_UHD_P1 = "audio/vnd.dts.uhd;profile=p1";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DTS_UHD_P2 = "audio/vnd.dts.uhd;profile=p2";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_EVRC = "audio/evrc";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_EVRCB = "audio/evrcb";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_EVRCWB = "audio/evrcwb";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_EVRCNW = "audio/evrcnw";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AMR_WB_PLUS = "audio/amr-wb+";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_APTX = "audio/aptx";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DRA = "audio/vnd.dra";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DOLBY_MAT = "audio/vnd.dolby.mat";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DOLBY_MAT_1_0 = "audio/vnd.dolby.mat.1.0";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DOLBY_MAT_2_0 = "audio/vnd.dolby.mat.2.0";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DOLBY_MAT_2_1 = "audio/vnd.dolby.mat.2.1";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_DOLBY_TRUEHD = "audio/vnd.dolby.mlp";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_MP4 = "audio/mp4a.40";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_MAIN = "audio/mp4a.40.01";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_LC = "audio/mp4a.40.02";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_SSR = "audio/mp4a.40.03";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_LTP = "audio/mp4a.40.04";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_HE_V1 = "audio/mp4a.40.05";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_SCALABLE = "audio/mp4a.40.06";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ERLC = "audio/mp4a.40.17";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_LD = "audio/mp4a.40.23";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_HE_V2 = "audio/mp4a.40.29";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ELD = "audio/mp4a.40.39";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_XHE = "audio/mp4a.40.42";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADIF = "audio/aac-adif";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_MAIN = "audio/aac-adts.01";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_LC = "audio/aac-adts.02";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_SSR = "audio/aac-adts.03";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_LTP = "audio/aac-adts.04";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_HE_V1 = "audio/aac-adts.05";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_SCALABLE = "audio/aac-adts.06";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_ERLC = "audio/aac-adts.17";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_LD = "audio/aac-adts.23";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_HE_V2 = "audio/aac-adts.29";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_ELD = "audio/aac-adts.39";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_ADTS_XHE = "audio/aac-adts.42";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_LATM_LC = "audio/mp4a-latm.02";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_LATM_HE_V1 = "audio/mp4a-latm.05";
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_AAC_LATM_HE_V2 = "audio/mp4a-latm.29";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_IEC61937 = "audio/x-iec61937";
// Note: not in the IANA registry.
inline constexpr const char* MEDIA_MIMETYPE_AUDIO_IEC60958 = "audio/x-iec60958";

inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_MPEG4 = "video/mp4";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_WAV = "audio/x-wav";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_OGG = "audio/ogg";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_MATROSKA = "video/x-matroska";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_MPEG2TS = "video/mp2ts";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_AVI = "video/avi";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_MPEG2PS = "video/mp2p";
inline constexpr const char* MEDIA_MIMETYPE_CONTAINER_HEIF = "image/heif";

inline constexpr const char* MEDIA_MIMETYPE_TEXT_3GPP = "text/3gpp-tt";
inline constexpr const char* MEDIA_MIMETYPE_TEXT_SUBRIP = "application/x-subrip";
inline constexpr const char* MEDIA_MIMETYPE_TEXT_VTT = "text/vtt";
inline constexpr const char* MEDIA_MIMETYPE_TEXT_CEA_608 = "text/cea-608";
inline constexpr const char* MEDIA_MIMETYPE_TEXT_CEA_708 = "text/cea-708";
inline constexpr const char* MEDIA_MIMETYPE_DATA_TIMED_ID3 = "application/x-id3v4";
#else
extern const char *MEDIA_MIMETYPE_IMAGE_JPEG;
extern const char *MEDIA_MIMETYPE_IMAGE_ANDROID_HEIC;
extern const char *MEDIA_MIMETYPE_IMAGE_AVIF;

extern const char *MEDIA_MIMETYPE_VIDEO_VP8;
extern const char *MEDIA_MIMETYPE_VIDEO_VP9;
extern const char *MEDIA_MIMETYPE_VIDEO_AV1;
extern const char *MEDIA_MIMETYPE_VIDEO_APV;
extern const char *MEDIA_MIMETYPE_VIDEO_AVC;
extern const char *MEDIA_MIMETYPE_VIDEO_HEVC;
extern const char *MEDIA_MIMETYPE_VIDEO_MPEG4;
extern const char *MEDIA_MIMETYPE_VIDEO_H263;
extern const char *MEDIA_MIMETYPE_VIDEO_MPEG2;
extern const char *MEDIA_MIMETYPE_VIDEO_RAW;
extern const char *MEDIA_MIMETYPE_VIDEO_DOLBY_VISION;
extern const char *MEDIA_MIMETYPE_VIDEO_SCRAMBLED;
extern const char *MEDIA_MIMETYPE_VIDEO_DIVX;
extern const char *MEDIA_MIMETYPE_VIDEO_DIVX3;
extern const char *MEDIA_MIMETYPE_VIDEO_XVID;
extern const char *MEDIA_MIMETYPE_VIDEO_MJPEG;

extern const char *MEDIA_MIMETYPE_AUDIO_AMR_NB;
extern const char *MEDIA_MIMETYPE_AUDIO_AMR_WB;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEG;           // layer III
extern const char *MEDIA_MIMETYPE_AUDIO_MPEG_LAYER_I;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEG_LAYER_II;
extern const char *MEDIA_MIMETYPE_AUDIO_MIDI;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC;
extern const char *MEDIA_MIMETYPE_AUDIO_QCELP;
extern const char *MEDIA_MIMETYPE_AUDIO_VORBIS;
extern const char *MEDIA_MIMETYPE_AUDIO_OPUS;
extern const char *MEDIA_MIMETYPE_AUDIO_G711_ALAW;
extern const char *MEDIA_MIMETYPE_AUDIO_G711_MLAW;
extern const char *MEDIA_MIMETYPE_AUDIO_RAW;
extern const char *MEDIA_MIMETYPE_AUDIO_FLAC;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS;
extern const char *MEDIA_MIMETYPE_AUDIO_MSGSM;
extern const char *MEDIA_MIMETYPE_AUDIO_AC3;
extern const char *MEDIA_MIMETYPE_AUDIO_EAC3;
extern const char *MEDIA_MIMETYPE_AUDIO_EAC3_JOC;
extern const char *MEDIA_MIMETYPE_AUDIO_AC4;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEGH_MHA1;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEGH_MHM1;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEGH_BL_L3;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEGH_BL_L4;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEGH_LC_L3;
extern const char *MEDIA_MIMETYPE_AUDIO_MPEGH_LC_L4;
extern const char *MEDIA_MIMETYPE_AUDIO_SCRAMBLED;
extern const char *MEDIA_MIMETYPE_AUDIO_ALAC;
extern const char *MEDIA_MIMETYPE_AUDIO_WMA;
extern const char *MEDIA_MIMETYPE_AUDIO_MS_ADPCM;
extern const char *MEDIA_MIMETYPE_AUDIO_DVI_IMA_ADPCM;
extern const char *MEDIA_MIMETYPE_AUDIO_DTS;
extern const char *MEDIA_MIMETYPE_AUDIO_DTS_HD;
extern const char *MEDIA_MIMETYPE_AUDIO_DTS_HD_MA;
extern const char *MEDIA_MIMETYPE_AUDIO_DTS_UHD;
extern const char *MEDIA_MIMETYPE_AUDIO_DTS_UHD_P1;
extern const char *MEDIA_MIMETYPE_AUDIO_DTS_UHD_P2;
extern const char *MEDIA_MIMETYPE_AUDIO_EVRC;
extern const char *MEDIA_MIMETYPE_AUDIO_EVRCB;
extern const char *MEDIA_MIMETYPE_AUDIO_EVRCWB;
extern const char *MEDIA_MIMETYPE_AUDIO_EVRCNW;
extern const char *MEDIA_MIMETYPE_AUDIO_AMR_WB_PLUS;
extern const char *MEDIA_MIMETYPE_AUDIO_APTX;
extern const char *MEDIA_MIMETYPE_AUDIO_DRA;
extern const char *MEDIA_MIMETYPE_AUDIO_DOLBY_MAT;
extern const char *MEDIA_MIMETYPE_AUDIO_DOLBY_MAT_1_0;
extern const char *MEDIA_MIMETYPE_AUDIO_DOLBY_MAT_2_0;
extern const char *MEDIA_MIMETYPE_AUDIO_DOLBY_MAT_2_1;
extern const char *MEDIA_MIMETYPE_AUDIO_DOLBY_TRUEHD;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_MP4;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_MAIN;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_LC;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_SSR;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_LTP;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_HE_V1;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_SCALABLE;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ERLC;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_LD;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_HE_V2;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ELD;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_XHE;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADIF;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_MAIN;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_LC;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_SSR;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_LTP;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_HE_V1;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_SCALABLE;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_ERLC;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_LD;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_HE_V2;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_ELD;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_ADTS_XHE;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_LATM_LC;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_LATM_HE_V1;
extern const char *MEDIA_MIMETYPE_AUDIO_AAC_LATM_HE_V2;
extern const char *MEDIA_MIMETYPE_AUDIO_IEC61937;
extern const char *MEDIA_MIMETYPE_AUDIO_IEC60958;

extern const char *MEDIA_MIMETYPE_CONTAINER_MPEG4;
extern const char *MEDIA_MIMETYPE_CONTAINER_WAV;
extern const char *MEDIA_MIMETYPE_CONTAINER_OGG;
extern const char *MEDIA_MIMETYPE_CONTAINER_MATROSKA;
extern const char *MEDIA_MIMETYPE_CONTAINER_MPEG2TS;
extern const char *MEDIA_MIMETYPE_CONTAINER_AVI;
extern const char *MEDIA_MIMETYPE_CONTAINER_MPEG2PS;
extern const char *MEDIA_MIMETYPE_CONTAINER_HEIF;

extern const char *MEDIA_MIMETYPE_TEXT_3GPP;
extern const char *MEDIA_MIMETYPE_TEXT_SUBRIP;
extern const char *MEDIA_MIMETYPE_TEXT_VTT;
extern const char *MEDIA_MIMETYPE_TEXT_CEA_608;
extern const char *MEDIA_MIMETYPE_TEXT_CEA_708;
extern const char *MEDIA_MIMETYPE_DATA_TIMED_ID3;
#endif
// These are values exported to JAVA API that need to be in sync with
// frameworks/base/media/java/android/media/AudioFormat.java. Unfortunately,
// they are not defined in frameworks/av, so defining them here.
enum AudioEncoding {
    kAudioEncodingPcm16bit = 2,
    kAudioEncodingPcm8bit = 3,
    kAudioEncodingPcmFloat = 4,
    kAudioEncodingPcm24bitPacked = 21,
    kAudioEncodingPcm32bit = 22,
};

}  // namespace android

#endif  // MEDIA_DEFS_H_
