//
//   Copyright 2018 DreamWorks Animation LLC.
//
//   Licensed under the Apache License, Version 2.0 (the "Apache License")
//   with the following modification; you may not use this file except in
//   compliance with the Apache License and the following modification to it:
//   Section 6. Trademarks. is deleted and replaced with:
//
//   6. Trademarks. This License does not grant permission to use the trade
//      names, trademarks, service marks, or product names of the Licensor
//      and its affiliates, except as required to comply with Section 4(c) of
//      the License and to reproduce the content of the NOTICE file.
//
//   You may obtain a copy of the Apache License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the Apache License with the above modification is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//   KIND, either express or implied. See the Apache License for the specific
//   language governing permissions and limitations under the Apache License.
//

static const std::string loop_xord_boundary =
"#\n"
"#   Four shapes ordered left->right and top->bottom in the XZ and UV planes\n"
"#\n"
"#   Shape 1:  top-left\n"
"#\n"
"v -0.750000 -0.500000  0.750000\n"
"v -0.150000  0.000000  0.750000\n"
"v -0.325736  0.000000  1.174264\n"
"v -0.750000  0.000000  1.350000\n"
"v -1.174264  0.000000  1.174264\n"
"v -1.350000  0.000000  0.750000\n"
"\n"
"vt  0.250000  0.750000\n"
"vt  0.450000  0.750000\n"
"vt  0.391421  0.891421\n"
"vt  0.250000  0.950000\n"
"vt  0.108579  0.891421\n"
"vt  0.050000  0.750000\n"
"\n"
"f  1/1   2/2   3/3\n"
"f  4/4   1/1   3/3\n"
"f  4/4   5/5   1/1\n"
"f  1/1   5/5   6/6\n"
"\n"
"#\n"
"#   Shape 2:  top-right\n"
"#\n"
"v  0.750000 -0.500000  0.750000\n"
"v  1.350000  0.000000  0.750000\n"
"v  1.235410  0.000000  1.102671\n"
"v  0.935410  0.000000  1.320634\n"
"v  0.564590  0.000000  1.320634\n"
"v  0.264590  0.000000  1.102671\n"
"v  0.150000  0.000000  0.750000\n"
"\n"
"vt  0.750000  0.750000\n"
"vt  0.950000  0.750000\n"
"vt  0.911803  0.867557\n"
"vt  0.811803  0.940211\n"
"vt  0.688197  0.940211\n"
"vt  0.588197  0.867557\n"
"vt  0.550000  0.750000\n"
"\n"
"f  7/7   8/8   9/9\n"
"f 10/10  7/7   9/9\n"
"f 10/10 11/11  7/7\n"
"f  7/7  11/11 12/12\n"
"f  7/7  12/12 13/13\n"
"\n"
"#\n"
"#   Shape 3:  bottom-left\n"
"#\n"
"v -0.750000 -0.500000 -0.750000\n"
"v -0.150000  0.000000 -0.750000\n"
"v -0.230385  0.000000 -0.450000\n"
"v -0.450000  0.000000 -0.230385\n"
"v -0.750000  0.000000 -0.150000\n"
"v -1.050000  0.000000 -0.230385\n"
"v -1.269615  0.000000 -0.450000\n"
"v -1.350000  0.000000 -0.750000\n"
"\n"
"vt  0.250000  0.250000\n"
"vt  0.450000  0.250000\n"
"vt  0.423205  0.350000\n"
"vt  0.350000  0.423205\n"
"vt  0.250000  0.450000\n"
"vt  0.150000  0.423205\n"
"vt  0.076795  0.350000\n"
"vt  0.050000  0.250000\n"
"\n"
"f 14/14 15/15 16/16\n"
"f 17/17 14/14 16/16\n"
"f 17/17 18/18 14/14\n"
"f 14/14 18/18 19/19\n"
"f 14/14 19/19 20/20\n"
"f 14/14 20/20 21/21\n"
"\n"
"#\n"
"#   Shape 4:  bottom-right\n"
"#\n"
"v  0.750000 -0.500000 -0.750000\n"
"v  1.350000  0.000000 -0.750000\n"
"v  1.304328  0.000000 -0.520390\n"
"v  1.174264  0.000000 -0.325736\n"
"v  0.979610  0.000000 -0.195672\n"
"v  0.750000  0.000000 -0.150000\n"
"v  0.520390  0.000000 -0.195672\n"
"v  0.325736  0.000000 -0.325736\n"
"v  0.195672  0.000000 -0.520390\n"
"v  0.150000  0.000000 -0.750000\n"
"\n"
"vt  0.750000  0.250000\n"
"vt  0.950000  0.250000\n"
"vt  0.934776  0.326537\n"
"vt  0.891421  0.391421\n"
"vt  0.826537  0.434776\n"
"vt  0.750000  0.450000\n"
"vt  0.673463  0.434776\n"
"vt  0.608579  0.391421\n"
"vt  0.565224  0.326537\n"
"vt  0.550000  0.250000\n"
"\n"
"f 22/22 23/23 24/24\n"
"f 25/25 22/22 24/24\n"
"f 25/25 26/26 22/22\n"
"f 22/22 26/26 27/27\n"
"f 22/22 27/27 28/28\n"
"f 22/22 28/28 29/29\n"
"f 22/22 29/29 30/30\n"
"f 22/22 30/30 31/31\n"
"\n"
"t interpolateboundary 1/0/0 1\n"
"\n"
;
