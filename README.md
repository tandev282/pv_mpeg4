# PacketVideo MPEG-4 decoder port

Unmodified Apache-2.0 decoder sources from AOSP via LineageOS, pinned to
`0bbac29e2a2f37d9f0dd149fb78f65da82509a83`:

https://github.com/LineageOS/android_frameworks_av/tree/0bbac29e2a2f37d9f0dd149fb78f65da82509a83/media/module/codecs/m4v_h263/dec

See `upstream/NOTICE` for the license and `source-lock.json` for content hashes.
The project-owned CMake target and logging shim are outside the upstream tree.
Re-fetch sources with `python scripts/fetch_mpeg4_decoder.py` from the repository
root. Do not edit upstream files in place.

This is the MPEG-4 **Part 2** decoder. It does not decode H.264, VP9 or AV1.
