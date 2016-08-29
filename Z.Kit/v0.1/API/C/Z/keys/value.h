/* Z Kit C API - keys/value.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_keys_value_H__
#define __Z_keys_value_H__

#define Z_VALUE_TYPE_UINT8     0
#define Z_VALUE_TYPE_INT8      1
#define Z_VALUE_TYPE_FLOAT8    2
#define Z_VALUE_TYPE_UINT16    3  /* Base type in SILP64 data model only. */
#define Z_VALUE_TYPE_INT16     4  /* Base type in SILP64 data model only. */
#define Z_VALUE_TYPE_FLOAT16   5
#define Z_VALUE_TYPE_UINT24    6
#define Z_VALUE_TYPE_INT24     7
#define Z_VALUE_TYPE_FLOAT24   8
#define Z_VALUE_TYPE_UINT32    9  /* Base type in ILP64 and SILP64 data models only. */
#define Z_VALUE_TYPE_INT32     10 /* Base type in ILP64 and SILP64 data models only. */
#define Z_VALUE_TYPE_FLOAT32   11
#define Z_VALUE_TYPE_UINT40    12
#define Z_VALUE_TYPE_INT40     13
#define Z_VALUE_TYPE_FLOAT40   14
#define Z_VALUE_TYPE_UINT48    15
#define Z_VALUE_TYPE_INT48     16
#define Z_VALUE_TYPE_FLOAT48   17
#define Z_VALUE_TYPE_UINT56    18
#define Z_VALUE_TYPE_INT56     19
#define Z_VALUE_TYPE_FLOAT56   20
#define Z_VALUE_TYPE_UINT64    21
#define Z_VALUE_TYPE_INT64     22
#define Z_VALUE_TYPE_FLOAT64   23
#define Z_VALUE_TYPE_UINT72    24
#define Z_VALUE_TYPE_INT72     25
#define Z_VALUE_TYPE_FLOAT72   26
#define Z_VALUE_TYPE_UINT80    27
#define Z_VALUE_TYPE_INT80     28
#define Z_VALUE_TYPE_FLOAT80   29
#define Z_VALUE_TYPE_UINT88    30
#define Z_VALUE_TYPE_INT88     31
#define Z_VALUE_TYPE_FLOAT88   32
#define Z_VALUE_TYPE_UINT96    33
#define Z_VALUE_TYPE_INT96     34
#define Z_VALUE_TYPE_FLOAT96   35
#define Z_VALUE_TYPE_UINT104   36
#define Z_VALUE_TYPE_INT104    37
#define Z_VALUE_TYPE_FLOAT104  38
#define Z_VALUE_TYPE_UINT112   39
#define Z_VALUE_TYPE_INT112    40
#define Z_VALUE_TYPE_FLOAT112  41
#define Z_VALUE_TYPE_UINT120   42
#define Z_VALUE_TYPE_INT120    43
#define Z_VALUE_TYPE_FLOAT120  44
#define Z_VALUE_TYPE_UINT128   45
#define Z_VALUE_TYPE_INT128    46
#define Z_VALUE_TYPE_FLOAT128  47
#define Z_VALUE_TYPE_UINT136   48
#define Z_VALUE_TYPE_INT136    49
#define Z_VALUE_TYPE_FLOAT136  50
#define Z_VALUE_TYPE_UINT144   51
#define Z_VALUE_TYPE_INT144    52
#define Z_VALUE_TYPE_FLOAT144  53
#define Z_VALUE_TYPE_UINT152   54
#define Z_VALUE_TYPE_INT152    55
#define Z_VALUE_TYPE_FLOAT152  56
#define Z_VALUE_TYPE_UINT160   57
#define Z_VALUE_TYPE_INT160    58
#define Z_VALUE_TYPE_FLOAT160  59
#define Z_VALUE_TYPE_UINT168   60
#define Z_VALUE_TYPE_INT168    61
#define Z_VALUE_TYPE_FLOAT168  62
#define Z_VALUE_TYPE_UINT176   63
#define Z_VALUE_TYPE_INT176    64
#define Z_VALUE_TYPE_FLOAT176  65
#define Z_VALUE_TYPE_UINT184   66
#define Z_VALUE_TYPE_INT184    67
#define Z_VALUE_TYPE_FLOAT184  68
#define Z_VALUE_TYPE_UINT192   69
#define Z_VALUE_TYPE_INT192    70
#define Z_VALUE_TYPE_FLOAT192  71
#define Z_VALUE_TYPE_UINT200   72
#define Z_VALUE_TYPE_INT200    73
#define Z_VALUE_TYPE_FLOAT200  74
#define Z_VALUE_TYPE_UINT208   75
#define Z_VALUE_TYPE_INT208    76
#define Z_VALUE_TYPE_FLOAT208  77
#define Z_VALUE_TYPE_UINT216   78
#define Z_VALUE_TYPE_INT216    79
#define Z_VALUE_TYPE_FLOAT216  80
#define Z_VALUE_TYPE_UINT224   81
#define Z_VALUE_TYPE_INT224    82
#define Z_VALUE_TYPE_FLOAT224  83
#define Z_VALUE_TYPE_UINT232   84
#define Z_VALUE_TYPE_INT232    85
#define Z_VALUE_TYPE_FLOAT232  86
#define Z_VALUE_TYPE_UINT240   87
#define Z_VALUE_TYPE_INT240    88
#define Z_VALUE_TYPE_FLOAT240  89
#define Z_VALUE_TYPE_UINT248   90
#define Z_VALUE_TYPE_INT248    91
#define Z_VALUE_TYPE_FLOAT248  92
#define Z_VALUE_TYPE_UINT256   93
#define Z_VALUE_TYPE_INT256    94
#define Z_VALUE_TYPE_FLOAT256  95
#define Z_VALUE_TYPE_UINT264   96
#define Z_VALUE_TYPE_INT264    97
#define Z_VALUE_TYPE_FLOAT264  98
#define Z_VALUE_TYPE_UINT272   99
#define Z_VALUE_TYPE_INT272    100
#define Z_VALUE_TYPE_FLOAT272  101
#define Z_VALUE_TYPE_UINT280   102
#define Z_VALUE_TYPE_INT280    103
#define Z_VALUE_TYPE_FLOAT280  104
#define Z_VALUE_TYPE_UINT288   105
#define Z_VALUE_TYPE_INT288    106
#define Z_VALUE_TYPE_FLOAT288  107
#define Z_VALUE_TYPE_UINT296   108
#define Z_VALUE_TYPE_INT296    109
#define Z_VALUE_TYPE_FLOAT296  110
#define Z_VALUE_TYPE_UINT304   111
#define Z_VALUE_TYPE_INT304    112
#define Z_VALUE_TYPE_FLOAT304  113
#define Z_VALUE_TYPE_UINT312   114
#define Z_VALUE_TYPE_INT312    115
#define Z_VALUE_TYPE_FLOAT312  116
#define Z_VALUE_TYPE_UINT320   117
#define Z_VALUE_TYPE_INT320    118
#define Z_VALUE_TYPE_FLOAT320  119
#define Z_VALUE_TYPE_UINT328   120
#define Z_VALUE_TYPE_INT328    121
#define Z_VALUE_TYPE_FLOAT328  122
#define Z_VALUE_TYPE_UINT336   123
#define Z_VALUE_TYPE_INT336    124
#define Z_VALUE_TYPE_FLOAT336  125
#define Z_VALUE_TYPE_UINT344   126
#define Z_VALUE_TYPE_INT344    127
#define Z_VALUE_TYPE_FLOAT344  128
#define Z_VALUE_TYPE_UINT352   129
#define Z_VALUE_TYPE_INT352    130
#define Z_VALUE_TYPE_FLOAT352  131
#define Z_VALUE_TYPE_UINT360   132
#define Z_VALUE_TYPE_INT360    133
#define Z_VALUE_TYPE_FLOAT360  134
#define Z_VALUE_TYPE_UINT368   135
#define Z_VALUE_TYPE_INT368    136
#define Z_VALUE_TYPE_FLOAT368  137
#define Z_VALUE_TYPE_UINT376   138
#define Z_VALUE_TYPE_INT376    139
#define Z_VALUE_TYPE_FLOAT376  140
#define Z_VALUE_TYPE_UINT384   141
#define Z_VALUE_TYPE_INT384    142
#define Z_VALUE_TYPE_FLOAT384  143
#define Z_VALUE_TYPE_UINT392   144
#define Z_VALUE_TYPE_INT392    145
#define Z_VALUE_TYPE_FLOAT392  146
#define Z_VALUE_TYPE_UINT400   147
#define Z_VALUE_TYPE_INT400    148
#define Z_VALUE_TYPE_FLOAT400  149
#define Z_VALUE_TYPE_UINT408   150
#define Z_VALUE_TYPE_INT408    151
#define Z_VALUE_TYPE_FLOAT408  152
#define Z_VALUE_TYPE_UINT416   153
#define Z_VALUE_TYPE_INT416    154
#define Z_VALUE_TYPE_FLOAT416  155
#define Z_VALUE_TYPE_UINT424   156
#define Z_VALUE_TYPE_INT424    157
#define Z_VALUE_TYPE_FLOAT424  158
#define Z_VALUE_TYPE_UINT432   159
#define Z_VALUE_TYPE_INT432    160
#define Z_VALUE_TYPE_FLOAT432  161
#define Z_VALUE_TYPE_UINT440   162
#define Z_VALUE_TYPE_INT440    163
#define Z_VALUE_TYPE_FLOAT440  164
#define Z_VALUE_TYPE_UINT448   165
#define Z_VALUE_TYPE_INT448    166
#define Z_VALUE_TYPE_FLOAT448  167
#define Z_VALUE_TYPE_UINT456   168
#define Z_VALUE_TYPE_INT456    169
#define Z_VALUE_TYPE_FLOAT456  170
#define Z_VALUE_TYPE_UINT464   171
#define Z_VALUE_TYPE_INT464    172
#define Z_VALUE_TYPE_FLOAT464  173
#define Z_VALUE_TYPE_UINT472   174
#define Z_VALUE_TYPE_INT472    175
#define Z_VALUE_TYPE_FLOAT472  176
#define Z_VALUE_TYPE_UINT480   177
#define Z_VALUE_TYPE_INT480    178
#define Z_VALUE_TYPE_FLOAT480  179
#define Z_VALUE_TYPE_UINT488   180
#define Z_VALUE_TYPE_INT488    181
#define Z_VALUE_TYPE_FLOAT488  182
#define Z_VALUE_TYPE_UINT496   183
#define Z_VALUE_TYPE_INT496    184
#define Z_VALUE_TYPE_FLOAT496  185
#define Z_VALUE_TYPE_UINT504   186
#define Z_VALUE_TYPE_INT504    187
#define Z_VALUE_TYPE_FLOAT504  188
#define Z_VALUE_TYPE_UINT512   189
#define Z_VALUE_TYPE_INT512    190
#define Z_VALUE_TYPE_FLOAT512  191
#define Z_VALUE_TYPE_UINT520   192
#define Z_VALUE_TYPE_INT520    193
#define Z_VALUE_TYPE_FLOAT520  194
#define Z_VALUE_TYPE_UINT528   195
#define Z_VALUE_TYPE_INT528    196
#define Z_VALUE_TYPE_FLOAT528  197
#define Z_VALUE_TYPE_UINT536   198
#define Z_VALUE_TYPE_INT536    199
#define Z_VALUE_TYPE_FLOAT536  200
#define Z_VALUE_TYPE_UINT544   201
#define Z_VALUE_TYPE_INT544    202
#define Z_VALUE_TYPE_FLOAT544  203
#define Z_VALUE_TYPE_UINT552   204
#define Z_VALUE_TYPE_INT552    205
#define Z_VALUE_TYPE_FLOAT552  206
#define Z_VALUE_TYPE_UINT560   207
#define Z_VALUE_TYPE_INT560    208
#define Z_VALUE_TYPE_FLOAT560  209
#define Z_VALUE_TYPE_UINT568   210
#define Z_VALUE_TYPE_INT568    211
#define Z_VALUE_TYPE_FLOAT568  212
#define Z_VALUE_TYPE_UINT576   213
#define Z_VALUE_TYPE_INT576    214
#define Z_VALUE_TYPE_FLOAT576  215
#define Z_VALUE_TYPE_UINT584   216
#define Z_VALUE_TYPE_INT584    217
#define Z_VALUE_TYPE_FLOAT584  218
#define Z_VALUE_TYPE_UINT592   219
#define Z_VALUE_TYPE_INT592    220
#define Z_VALUE_TYPE_FLOAT592  221
#define Z_VALUE_TYPE_UINT600   222
#define Z_VALUE_TYPE_INT600    223
#define Z_VALUE_TYPE_FLOAT600  224
#define Z_VALUE_TYPE_UINT608   225
#define Z_VALUE_TYPE_INT608    226
#define Z_VALUE_TYPE_FLOAT608  227
#define Z_VALUE_TYPE_UINT616   228
#define Z_VALUE_TYPE_INT616    229
#define Z_VALUE_TYPE_FLOAT616  230
#define Z_VALUE_TYPE_UINT624   231
#define Z_VALUE_TYPE_INT624    232
#define Z_VALUE_TYPE_FLOAT624  233
#define Z_VALUE_TYPE_UINT632   234
#define Z_VALUE_TYPE_INT632    235
#define Z_VALUE_TYPE_FLOAT632  236
#define Z_VALUE_TYPE_UINT640   237
#define Z_VALUE_TYPE_INT640    238
#define Z_VALUE_TYPE_FLOAT640  239
#define Z_VALUE_TYPE_UINT648   240
#define Z_VALUE_TYPE_INT648    241
#define Z_VALUE_TYPE_FLOAT648  242
#define Z_VALUE_TYPE_UINT656   243
#define Z_VALUE_TYPE_INT656    244
#define Z_VALUE_TYPE_FLOAT656  245
#define Z_VALUE_TYPE_UINT664   246
#define Z_VALUE_TYPE_INT664    247
#define Z_VALUE_TYPE_FLOAT664  248
#define Z_VALUE_TYPE_UINT672   249
#define Z_VALUE_TYPE_INT672    250
#define Z_VALUE_TYPE_FLOAT672  251
#define Z_VALUE_TYPE_UINT680   252
#define Z_VALUE_TYPE_INT680    253
#define Z_VALUE_TYPE_FLOAT680  254
#define Z_VALUE_TYPE_UINT688   255
#define Z_VALUE_TYPE_INT688    256
#define Z_VALUE_TYPE_FLOAT688  257
#define Z_VALUE_TYPE_UINT696   258
#define Z_VALUE_TYPE_INT696    259
#define Z_VALUE_TYPE_FLOAT696  260
#define Z_VALUE_TYPE_UINT704   261
#define Z_VALUE_TYPE_INT704    262
#define Z_VALUE_TYPE_FLOAT704  263
#define Z_VALUE_TYPE_UINT712   264
#define Z_VALUE_TYPE_INT712    265
#define Z_VALUE_TYPE_FLOAT712  266
#define Z_VALUE_TYPE_UINT720   267
#define Z_VALUE_TYPE_INT720    268
#define Z_VALUE_TYPE_FLOAT720  269
#define Z_VALUE_TYPE_UINT728   270
#define Z_VALUE_TYPE_INT728    271
#define Z_VALUE_TYPE_FLOAT728  272
#define Z_VALUE_TYPE_UINT736   273
#define Z_VALUE_TYPE_INT736    274
#define Z_VALUE_TYPE_FLOAT736  275
#define Z_VALUE_TYPE_UINT744   276
#define Z_VALUE_TYPE_INT744    277
#define Z_VALUE_TYPE_FLOAT744  278
#define Z_VALUE_TYPE_UINT752   279
#define Z_VALUE_TYPE_INT752    280
#define Z_VALUE_TYPE_FLOAT752  281
#define Z_VALUE_TYPE_UINT760   282
#define Z_VALUE_TYPE_INT760    283
#define Z_VALUE_TYPE_FLOAT760  284
#define Z_VALUE_TYPE_UINT768   285
#define Z_VALUE_TYPE_INT768    286
#define Z_VALUE_TYPE_FLOAT768  287
#define Z_VALUE_TYPE_UINT776   288
#define Z_VALUE_TYPE_INT776    289
#define Z_VALUE_TYPE_FLOAT776  290
#define Z_VALUE_TYPE_UINT784   291
#define Z_VALUE_TYPE_INT784    292
#define Z_VALUE_TYPE_FLOAT784  293
#define Z_VALUE_TYPE_UINT792   294
#define Z_VALUE_TYPE_INT792    295
#define Z_VALUE_TYPE_FLOAT792  296
#define Z_VALUE_TYPE_UINT800   297
#define Z_VALUE_TYPE_INT800    298
#define Z_VALUE_TYPE_FLOAT800  299
#define Z_VALUE_TYPE_UINT808   300
#define Z_VALUE_TYPE_INT808    301
#define Z_VALUE_TYPE_FLOAT808  302
#define Z_VALUE_TYPE_UINT816   303
#define Z_VALUE_TYPE_INT816    304
#define Z_VALUE_TYPE_FLOAT816  305
#define Z_VALUE_TYPE_UINT824   306
#define Z_VALUE_TYPE_INT824    307
#define Z_VALUE_TYPE_FLOAT824  308
#define Z_VALUE_TYPE_UINT832   309
#define Z_VALUE_TYPE_INT832    310
#define Z_VALUE_TYPE_FLOAT832  311
#define Z_VALUE_TYPE_UINT840   312
#define Z_VALUE_TYPE_INT840    313
#define Z_VALUE_TYPE_FLOAT840  314
#define Z_VALUE_TYPE_UINT848   315
#define Z_VALUE_TYPE_INT848    316
#define Z_VALUE_TYPE_FLOAT848  317
#define Z_VALUE_TYPE_UINT856   318
#define Z_VALUE_TYPE_INT856    319
#define Z_VALUE_TYPE_FLOAT856  320
#define Z_VALUE_TYPE_UINT864   321
#define Z_VALUE_TYPE_INT864    322
#define Z_VALUE_TYPE_FLOAT864  323
#define Z_VALUE_TYPE_UINT872   324
#define Z_VALUE_TYPE_INT872    325
#define Z_VALUE_TYPE_FLOAT872  326
#define Z_VALUE_TYPE_UINT880   327
#define Z_VALUE_TYPE_INT880    328
#define Z_VALUE_TYPE_FLOAT880  329
#define Z_VALUE_TYPE_UINT888   330
#define Z_VALUE_TYPE_INT888    331
#define Z_VALUE_TYPE_FLOAT888  332
#define Z_VALUE_TYPE_UINT896   333
#define Z_VALUE_TYPE_INT896    334
#define Z_VALUE_TYPE_FLOAT896  335
#define Z_VALUE_TYPE_UINT904   336
#define Z_VALUE_TYPE_INT904    337
#define Z_VALUE_TYPE_FLOAT904  338
#define Z_VALUE_TYPE_UINT912   339
#define Z_VALUE_TYPE_INT912    340
#define Z_VALUE_TYPE_FLOAT912  341
#define Z_VALUE_TYPE_UINT920   342
#define Z_VALUE_TYPE_INT920    343
#define Z_VALUE_TYPE_FLOAT920  344
#define Z_VALUE_TYPE_UINT928   345
#define Z_VALUE_TYPE_INT928    346
#define Z_VALUE_TYPE_FLOAT928  347
#define Z_VALUE_TYPE_UINT936   348
#define Z_VALUE_TYPE_INT936    349
#define Z_VALUE_TYPE_FLOAT936  350
#define Z_VALUE_TYPE_UINT944   351
#define Z_VALUE_TYPE_INT944    352
#define Z_VALUE_TYPE_FLOAT944  353
#define Z_VALUE_TYPE_UINT952   354
#define Z_VALUE_TYPE_INT952    355
#define Z_VALUE_TYPE_FLOAT952  356
#define Z_VALUE_TYPE_UINT960   357
#define Z_VALUE_TYPE_INT960    358
#define Z_VALUE_TYPE_FLOAT960  359
#define Z_VALUE_TYPE_UINT968   360
#define Z_VALUE_TYPE_INT968    361
#define Z_VALUE_TYPE_FLOAT968  362
#define Z_VALUE_TYPE_UINT976   363
#define Z_VALUE_TYPE_INT976    364
#define Z_VALUE_TYPE_FLOAT976  365
#define Z_VALUE_TYPE_UINT984   366
#define Z_VALUE_TYPE_INT984    367
#define Z_VALUE_TYPE_FLOAT984  368
#define Z_VALUE_TYPE_UINT992   369
#define Z_VALUE_TYPE_INT992    370
#define Z_VALUE_TYPE_FLOAT992  371
#define Z_VALUE_TYPE_UINT1000  372
#define Z_VALUE_TYPE_INT1000   373
#define Z_VALUE_TYPE_FLOAT1000 374
#define Z_VALUE_TYPE_UINT1008  375
#define Z_VALUE_TYPE_INT1008   376
#define Z_VALUE_TYPE_FLOAT1008 377
#define Z_VALUE_TYPE_UINT1016  378
#define Z_VALUE_TYPE_INT1016   379
#define Z_VALUE_TYPE_FLOAT1016 380
#define Z_VALUE_TYPE_UINT1024  381
#define Z_VALUE_TYPE_INT1024   382
#define Z_VALUE_TYPE_FLOAT1024 383
#define Z_VALUE_TYPE_UCHAR     384
#define Z_VALUE_TYPE_USHORT    385
#define Z_VALUE_TYPE_UINT      386
#define Z_VALUE_TYPE_ULONG     387
#define Z_VALUE_TYPE_ULLONG    388
#define Z_VALUE_TYPE_CHAR      389
#define Z_VALUE_TYPE_SHORT     390
#define Z_VALUE_TYPE_INT       391
#define Z_VALUE_TYPE_LONG      392
#define Z_VALUE_TYPE_LLONG     393
#define Z_VALUE_TYPE_FLOAT     394
#define Z_VALUE_TYPE_DOUBLE    395
#define Z_VALUE_TYPE_LDOUBLE   396
#define Z_VALUE_TYPE_SIZE      397
#define Z_VALUE_TYPE_SSIZE     398
#define Z_VALUE_TYPE_UINTMAX   399 /* C99 7.18.1.5 Greatest-width integer types. */
#define Z_VALUE_TYPE_UINTPTR   400
#define Z_VALUE_TYPE_UINTTOP   401
#define Z_VALUE_TYPE_INTMAX    402 /* C99 7.18.1.5 Greatest-width integer types. */
#define Z_VALUE_TYPE_INTPTR    403
#define Z_VALUE_TYPE_INTTOP    404
#define Z_VALUE_TYPE_BOOLEAN   405
#define Z_VALUE_TYPE_CHARACTER 406
#define Z_VALUE_TYPE_NATURAL   407
#define Z_VALUE_TYPE_INTEGER   408
#define Z_VALUE_TYPE_REAL      409

#define Z_KEY_BITS_VALUE_TYPE 16
#define Z_KEY_LAST_VALUE_TYPE Z_VALUE_TYPE_REAL

#define Z_INTEGER_FORMAT_1S_COMPLEMENT 0
#define Z_INTEGER_FORMAT_2S_COMPLEMENT 1

#define Z_KEY_BITS_INTEGER_FORMAT 8
#define Z_KEY_LAST_INTEGER_FORMAT Z_INTEGER_FORMAT_2S_COMPLEMENT

#define Z_VALUE_FORMAT_8BIT_NATURAL    0
#define Z_VALUE_FORMAT_16BIT_NATURAL   1
#define Z_VALUE_FORMAT_24BIT_NATURAL   2
#define Z_VALUE_FORMAT_32BIT_NATURAL   3
#define Z_VALUE_FORMAT_40BIT_NATURAL   4
#define Z_VALUE_FORMAT_48BIT_NATURAL   5
#define Z_VALUE_FORMAT_56BIT_NATURAL   6
#define Z_VALUE_FORMAT_64BIT_NATURAL   7
#define Z_VALUE_FORMAT_72BIT_NATURAL   8
#define Z_VALUE_FORMAT_80BIT_NATURAL   9
#define Z_VALUE_FORMAT_88BIT_NATURAL   10
#define Z_VALUE_FORMAT_96BIT_NATURAL   11
#define Z_VALUE_FORMAT_104BIT_NATURAL  12
#define Z_VALUE_FORMAT_112BIT_NATURAL  13
#define Z_VALUE_FORMAT_120BIT_NATURAL  14
#define Z_VALUE_FORMAT_128BIT_NATURAL  15
#define Z_VALUE_FORMAT_136BIT_NATURAL  16
#define Z_VALUE_FORMAT_144BIT_NATURAL  17
#define Z_VALUE_FORMAT_152BIT_NATURAL  18
#define Z_VALUE_FORMAT_160BIT_NATURAL  19
#define Z_VALUE_FORMAT_168BIT_NATURAL  20
#define Z_VALUE_FORMAT_176BIT_NATURAL  21
#define Z_VALUE_FORMAT_184BIT_NATURAL  22
#define Z_VALUE_FORMAT_192BIT_NATURAL  23
#define Z_VALUE_FORMAT_200BIT_NATURAL  24
#define Z_VALUE_FORMAT_208BIT_NATURAL  25
#define Z_VALUE_FORMAT_216BIT_NATURAL  26
#define Z_VALUE_FORMAT_224BIT_NATURAL  27
#define Z_VALUE_FORMAT_232BIT_NATURAL  28
#define Z_VALUE_FORMAT_240BIT_NATURAL  29
#define Z_VALUE_FORMAT_248BIT_NATURAL  30
#define Z_VALUE_FORMAT_256BIT_NATURAL  31
#define Z_VALUE_FORMAT_264BIT_NATURAL  32
#define Z_VALUE_FORMAT_272BIT_NATURAL  33
#define Z_VALUE_FORMAT_280BIT_NATURAL  34
#define Z_VALUE_FORMAT_288BIT_NATURAL  35
#define Z_VALUE_FORMAT_296BIT_NATURAL  36
#define Z_VALUE_FORMAT_304BIT_NATURAL  37
#define Z_VALUE_FORMAT_312BIT_NATURAL  38
#define Z_VALUE_FORMAT_320BIT_NATURAL  39
#define Z_VALUE_FORMAT_328BIT_NATURAL  40
#define Z_VALUE_FORMAT_336BIT_NATURAL  41
#define Z_VALUE_FORMAT_344BIT_NATURAL  42
#define Z_VALUE_FORMAT_352BIT_NATURAL  43
#define Z_VALUE_FORMAT_360BIT_NATURAL  44
#define Z_VALUE_FORMAT_368BIT_NATURAL  45
#define Z_VALUE_FORMAT_376BIT_NATURAL  46
#define Z_VALUE_FORMAT_384BIT_NATURAL  47
#define Z_VALUE_FORMAT_392BIT_NATURAL  48
#define Z_VALUE_FORMAT_400BIT_NATURAL  49
#define Z_VALUE_FORMAT_408BIT_NATURAL  50
#define Z_VALUE_FORMAT_416BIT_NATURAL  51
#define Z_VALUE_FORMAT_424BIT_NATURAL  52
#define Z_VALUE_FORMAT_432BIT_NATURAL  53
#define Z_VALUE_FORMAT_440BIT_NATURAL  54
#define Z_VALUE_FORMAT_448BIT_NATURAL  55
#define Z_VALUE_FORMAT_456BIT_NATURAL  56
#define Z_VALUE_FORMAT_464BIT_NATURAL  57
#define Z_VALUE_FORMAT_472BIT_NATURAL  58
#define Z_VALUE_FORMAT_480BIT_NATURAL  59
#define Z_VALUE_FORMAT_488BIT_NATURAL  60
#define Z_VALUE_FORMAT_496BIT_NATURAL  61
#define Z_VALUE_FORMAT_504BIT_NATURAL  62
#define Z_VALUE_FORMAT_512BIT_NATURAL  63
#define Z_VALUE_FORMAT_520BIT_NATURAL  64
#define Z_VALUE_FORMAT_528BIT_NATURAL  65
#define Z_VALUE_FORMAT_536BIT_NATURAL  66
#define Z_VALUE_FORMAT_544BIT_NATURAL  67
#define Z_VALUE_FORMAT_552BIT_NATURAL  68
#define Z_VALUE_FORMAT_560BIT_NATURAL  69
#define Z_VALUE_FORMAT_568BIT_NATURAL  70
#define Z_VALUE_FORMAT_576BIT_NATURAL  71
#define Z_VALUE_FORMAT_584BIT_NATURAL  72
#define Z_VALUE_FORMAT_592BIT_NATURAL  73
#define Z_VALUE_FORMAT_600BIT_NATURAL  74
#define Z_VALUE_FORMAT_608BIT_NATURAL  75
#define Z_VALUE_FORMAT_616BIT_NATURAL  76
#define Z_VALUE_FORMAT_624BIT_NATURAL  77
#define Z_VALUE_FORMAT_632BIT_NATURAL  78
#define Z_VALUE_FORMAT_640BIT_NATURAL  79
#define Z_VALUE_FORMAT_648BIT_NATURAL  80
#define Z_VALUE_FORMAT_656BIT_NATURAL  81
#define Z_VALUE_FORMAT_664BIT_NATURAL  82
#define Z_VALUE_FORMAT_672BIT_NATURAL  83
#define Z_VALUE_FORMAT_680BIT_NATURAL  84
#define Z_VALUE_FORMAT_688BIT_NATURAL  85
#define Z_VALUE_FORMAT_696BIT_NATURAL  86
#define Z_VALUE_FORMAT_704BIT_NATURAL  87
#define Z_VALUE_FORMAT_712BIT_NATURAL  88
#define Z_VALUE_FORMAT_720BIT_NATURAL  89
#define Z_VALUE_FORMAT_728BIT_NATURAL  90
#define Z_VALUE_FORMAT_736BIT_NATURAL  91
#define Z_VALUE_FORMAT_744BIT_NATURAL  92
#define Z_VALUE_FORMAT_752BIT_NATURAL  93
#define Z_VALUE_FORMAT_760BIT_NATURAL  94
#define Z_VALUE_FORMAT_768BIT_NATURAL  95
#define Z_VALUE_FORMAT_776BIT_NATURAL  96
#define Z_VALUE_FORMAT_784BIT_NATURAL  97
#define Z_VALUE_FORMAT_792BIT_NATURAL  98
#define Z_VALUE_FORMAT_800BIT_NATURAL  99
#define Z_VALUE_FORMAT_808BIT_NATURAL  100
#define Z_VALUE_FORMAT_816BIT_NATURAL  101
#define Z_VALUE_FORMAT_824BIT_NATURAL  102
#define Z_VALUE_FORMAT_832BIT_NATURAL  103
#define Z_VALUE_FORMAT_840BIT_NATURAL  104
#define Z_VALUE_FORMAT_848BIT_NATURAL  105
#define Z_VALUE_FORMAT_856BIT_NATURAL  106
#define Z_VALUE_FORMAT_864BIT_NATURAL  107
#define Z_VALUE_FORMAT_872BIT_NATURAL  108
#define Z_VALUE_FORMAT_880BIT_NATURAL  109
#define Z_VALUE_FORMAT_888BIT_NATURAL  110
#define Z_VALUE_FORMAT_896BIT_NATURAL  111
#define Z_VALUE_FORMAT_904BIT_NATURAL  112
#define Z_VALUE_FORMAT_912BIT_NATURAL  113
#define Z_VALUE_FORMAT_920BIT_NATURAL  114
#define Z_VALUE_FORMAT_928BIT_NATURAL  115
#define Z_VALUE_FORMAT_936BIT_NATURAL  116
#define Z_VALUE_FORMAT_944BIT_NATURAL  117
#define Z_VALUE_FORMAT_952BIT_NATURAL  118
#define Z_VALUE_FORMAT_960BIT_NATURAL  119
#define Z_VALUE_FORMAT_968BIT_NATURAL  120
#define Z_VALUE_FORMAT_976BIT_NATURAL  121
#define Z_VALUE_FORMAT_984BIT_NATURAL  122
#define Z_VALUE_FORMAT_992BIT_NATURAL  123
#define Z_VALUE_FORMAT_1000BIT_NATURAL 124
#define Z_VALUE_FORMAT_1008BIT_NATURAL 125
#define Z_VALUE_FORMAT_1016BIT_NATURAL 126
#define Z_VALUE_FORMAT_1024BIT_NATURAL 127

#define Z_VALUE_FORMAT_8BIT_2S_COMPLEMENT_INTEGER    1024
#define Z_VALUE_FORMAT_16BIT_2S_COMPLEMENT_INTEGER   1025
#define Z_VALUE_FORMAT_24BIT_2S_COMPLEMENT_INTEGER   1026
#define Z_VALUE_FORMAT_32BIT_2S_COMPLEMENT_INTEGER   1027
#define Z_VALUE_FORMAT_40BIT_2S_COMPLEMENT_INTEGER   1028
#define Z_VALUE_FORMAT_48BIT_2S_COMPLEMENT_INTEGER   1029
#define Z_VALUE_FORMAT_56BIT_2S_COMPLEMENT_INTEGER   1030
#define Z_VALUE_FORMAT_64BIT_2S_COMPLEMENT_INTEGER   1031
#define Z_VALUE_FORMAT_72BIT_2S_COMPLEMENT_INTEGER   1032
#define Z_VALUE_FORMAT_80BIT_2S_COMPLEMENT_INTEGER   1033
#define Z_VALUE_FORMAT_88BIT_2S_COMPLEMENT_INTEGER   1034
#define Z_VALUE_FORMAT_96BIT_2S_COMPLEMENT_INTEGER   1035
#define Z_VALUE_FORMAT_104BIT_2S_COMPLEMENT_INTEGER  1036
#define Z_VALUE_FORMAT_112BIT_2S_COMPLEMENT_INTEGER  1037
#define Z_VALUE_FORMAT_120BIT_2S_COMPLEMENT_INTEGER  1038
#define Z_VALUE_FORMAT_128BIT_2S_COMPLEMENT_INTEGER  1039
#define Z_VALUE_FORMAT_136BIT_2S_COMPLEMENT_INTEGER  1040
#define Z_VALUE_FORMAT_144BIT_2S_COMPLEMENT_INTEGER  1041
#define Z_VALUE_FORMAT_152BIT_2S_COMPLEMENT_INTEGER  1042
#define Z_VALUE_FORMAT_160BIT_2S_COMPLEMENT_INTEGER  1043
#define Z_VALUE_FORMAT_168BIT_2S_COMPLEMENT_INTEGER  1044
#define Z_VALUE_FORMAT_176BIT_2S_COMPLEMENT_INTEGER  1045
#define Z_VALUE_FORMAT_184BIT_2S_COMPLEMENT_INTEGER  1046
#define Z_VALUE_FORMAT_192BIT_2S_COMPLEMENT_INTEGER  1047
#define Z_VALUE_FORMAT_200BIT_2S_COMPLEMENT_INTEGER  1048
#define Z_VALUE_FORMAT_208BIT_2S_COMPLEMENT_INTEGER  1049
#define Z_VALUE_FORMAT_216BIT_2S_COMPLEMENT_INTEGER  1050
#define Z_VALUE_FORMAT_224BIT_2S_COMPLEMENT_INTEGER  1051
#define Z_VALUE_FORMAT_232BIT_2S_COMPLEMENT_INTEGER  1052
#define Z_VALUE_FORMAT_240BIT_2S_COMPLEMENT_INTEGER  1053
#define Z_VALUE_FORMAT_248BIT_2S_COMPLEMENT_INTEGER  1054
#define Z_VALUE_FORMAT_256BIT_2S_COMPLEMENT_INTEGER  1055
#define Z_VALUE_FORMAT_264BIT_2S_COMPLEMENT_INTEGER  1056
#define Z_VALUE_FORMAT_272BIT_2S_COMPLEMENT_INTEGER  1057
#define Z_VALUE_FORMAT_280BIT_2S_COMPLEMENT_INTEGER  1058
#define Z_VALUE_FORMAT_288BIT_2S_COMPLEMENT_INTEGER  1059
#define Z_VALUE_FORMAT_296BIT_2S_COMPLEMENT_INTEGER  1060
#define Z_VALUE_FORMAT_304BIT_2S_COMPLEMENT_INTEGER  1061
#define Z_VALUE_FORMAT_312BIT_2S_COMPLEMENT_INTEGER  1062
#define Z_VALUE_FORMAT_320BIT_2S_COMPLEMENT_INTEGER  1063
#define Z_VALUE_FORMAT_328BIT_2S_COMPLEMENT_INTEGER  1064
#define Z_VALUE_FORMAT_336BIT_2S_COMPLEMENT_INTEGER  1065
#define Z_VALUE_FORMAT_344BIT_2S_COMPLEMENT_INTEGER  1066
#define Z_VALUE_FORMAT_352BIT_2S_COMPLEMENT_INTEGER  1067
#define Z_VALUE_FORMAT_360BIT_2S_COMPLEMENT_INTEGER  1068
#define Z_VALUE_FORMAT_368BIT_2S_COMPLEMENT_INTEGER  1069
#define Z_VALUE_FORMAT_376BIT_2S_COMPLEMENT_INTEGER  1070
#define Z_VALUE_FORMAT_384BIT_2S_COMPLEMENT_INTEGER  1071
#define Z_VALUE_FORMAT_392BIT_2S_COMPLEMENT_INTEGER  1072
#define Z_VALUE_FORMAT_400BIT_2S_COMPLEMENT_INTEGER  1073
#define Z_VALUE_FORMAT_408BIT_2S_COMPLEMENT_INTEGER  1074
#define Z_VALUE_FORMAT_416BIT_2S_COMPLEMENT_INTEGER  1075
#define Z_VALUE_FORMAT_424BIT_2S_COMPLEMENT_INTEGER  1076
#define Z_VALUE_FORMAT_432BIT_2S_COMPLEMENT_INTEGER  1077
#define Z_VALUE_FORMAT_440BIT_2S_COMPLEMENT_INTEGER  1078
#define Z_VALUE_FORMAT_448BIT_2S_COMPLEMENT_INTEGER  1079
#define Z_VALUE_FORMAT_456BIT_2S_COMPLEMENT_INTEGER  1080
#define Z_VALUE_FORMAT_464BIT_2S_COMPLEMENT_INTEGER  1081
#define Z_VALUE_FORMAT_472BIT_2S_COMPLEMENT_INTEGER  1082
#define Z_VALUE_FORMAT_480BIT_2S_COMPLEMENT_INTEGER  1083
#define Z_VALUE_FORMAT_488BIT_2S_COMPLEMENT_INTEGER  1084
#define Z_VALUE_FORMAT_496BIT_2S_COMPLEMENT_INTEGER  1085
#define Z_VALUE_FORMAT_504BIT_2S_COMPLEMENT_INTEGER  1086
#define Z_VALUE_FORMAT_512BIT_2S_COMPLEMENT_INTEGER  1087
#define Z_VALUE_FORMAT_520BIT_2S_COMPLEMENT_INTEGER  1088
#define Z_VALUE_FORMAT_528BIT_2S_COMPLEMENT_INTEGER  1089
#define Z_VALUE_FORMAT_536BIT_2S_COMPLEMENT_INTEGER  1090
#define Z_VALUE_FORMAT_544BIT_2S_COMPLEMENT_INTEGER  1091
#define Z_VALUE_FORMAT_552BIT_2S_COMPLEMENT_INTEGER  1092
#define Z_VALUE_FORMAT_560BIT_2S_COMPLEMENT_INTEGER  1093
#define Z_VALUE_FORMAT_568BIT_2S_COMPLEMENT_INTEGER  1094
#define Z_VALUE_FORMAT_576BIT_2S_COMPLEMENT_INTEGER  1095
#define Z_VALUE_FORMAT_584BIT_2S_COMPLEMENT_INTEGER  1096
#define Z_VALUE_FORMAT_592BIT_2S_COMPLEMENT_INTEGER  1097
#define Z_VALUE_FORMAT_600BIT_2S_COMPLEMENT_INTEGER  1098
#define Z_VALUE_FORMAT_608BIT_2S_COMPLEMENT_INTEGER  1099
#define Z_VALUE_FORMAT_616BIT_2S_COMPLEMENT_INTEGER  1100
#define Z_VALUE_FORMAT_624BIT_2S_COMPLEMENT_INTEGER  1101
#define Z_VALUE_FORMAT_632BIT_2S_COMPLEMENT_INTEGER  1102
#define Z_VALUE_FORMAT_640BIT_2S_COMPLEMENT_INTEGER  1103
#define Z_VALUE_FORMAT_648BIT_2S_COMPLEMENT_INTEGER  1104
#define Z_VALUE_FORMAT_656BIT_2S_COMPLEMENT_INTEGER  1105
#define Z_VALUE_FORMAT_664BIT_2S_COMPLEMENT_INTEGER  1106
#define Z_VALUE_FORMAT_672BIT_2S_COMPLEMENT_INTEGER  1107
#define Z_VALUE_FORMAT_680BIT_2S_COMPLEMENT_INTEGER  1108
#define Z_VALUE_FORMAT_688BIT_2S_COMPLEMENT_INTEGER  1109
#define Z_VALUE_FORMAT_696BIT_2S_COMPLEMENT_INTEGER  1110
#define Z_VALUE_FORMAT_704BIT_2S_COMPLEMENT_INTEGER  1111
#define Z_VALUE_FORMAT_712BIT_2S_COMPLEMENT_INTEGER  1112
#define Z_VALUE_FORMAT_720BIT_2S_COMPLEMENT_INTEGER  1113
#define Z_VALUE_FORMAT_728BIT_2S_COMPLEMENT_INTEGER  1114
#define Z_VALUE_FORMAT_736BIT_2S_COMPLEMENT_INTEGER  1115
#define Z_VALUE_FORMAT_744BIT_2S_COMPLEMENT_INTEGER  1116
#define Z_VALUE_FORMAT_752BIT_2S_COMPLEMENT_INTEGER  1117
#define Z_VALUE_FORMAT_760BIT_2S_COMPLEMENT_INTEGER  1118
#define Z_VALUE_FORMAT_768BIT_2S_COMPLEMENT_INTEGER  1119
#define Z_VALUE_FORMAT_776BIT_2S_COMPLEMENT_INTEGER  1110
#define Z_VALUE_FORMAT_784BIT_2S_COMPLEMENT_INTEGER  1121
#define Z_VALUE_FORMAT_792BIT_2S_COMPLEMENT_INTEGER  1122
#define Z_VALUE_FORMAT_800BIT_2S_COMPLEMENT_INTEGER  1123
#define Z_VALUE_FORMAT_808BIT_2S_COMPLEMENT_INTEGER  1124
#define Z_VALUE_FORMAT_816BIT_2S_COMPLEMENT_INTEGER  1125
#define Z_VALUE_FORMAT_824BIT_2S_COMPLEMENT_INTEGER  1126
#define Z_VALUE_FORMAT_832BIT_2S_COMPLEMENT_INTEGER  1127
#define Z_VALUE_FORMAT_840BIT_2S_COMPLEMENT_INTEGER  1128
#define Z_VALUE_FORMAT_848BIT_2S_COMPLEMENT_INTEGER  1129
#define Z_VALUE_FORMAT_856BIT_2S_COMPLEMENT_INTEGER  1120
#define Z_VALUE_FORMAT_864BIT_2S_COMPLEMENT_INTEGER  1131
#define Z_VALUE_FORMAT_872BIT_2S_COMPLEMENT_INTEGER  1132
#define Z_VALUE_FORMAT_880BIT_2S_COMPLEMENT_INTEGER  1133
#define Z_VALUE_FORMAT_888BIT_2S_COMPLEMENT_INTEGER  1134
#define Z_VALUE_FORMAT_896BIT_2S_COMPLEMENT_INTEGER  1135
#define Z_VALUE_FORMAT_904BIT_2S_COMPLEMENT_INTEGER  1136
#define Z_VALUE_FORMAT_912BIT_2S_COMPLEMENT_INTEGER  1137
#define Z_VALUE_FORMAT_920BIT_2S_COMPLEMENT_INTEGER  1138
#define Z_VALUE_FORMAT_928BIT_2S_COMPLEMENT_INTEGER  1139
#define Z_VALUE_FORMAT_936BIT_2S_COMPLEMENT_INTEGER  1130
#define Z_VALUE_FORMAT_944BIT_2S_COMPLEMENT_INTEGER  1141
#define Z_VALUE_FORMAT_952BIT_2S_COMPLEMENT_INTEGER  1142
#define Z_VALUE_FORMAT_960BIT_2S_COMPLEMENT_INTEGER  1143
#define Z_VALUE_FORMAT_968BIT_2S_COMPLEMENT_INTEGER  1144
#define Z_VALUE_FORMAT_976BIT_2S_COMPLEMENT_INTEGER  1145
#define Z_VALUE_FORMAT_984BIT_2S_COMPLEMENT_INTEGER  1146
#define Z_VALUE_FORMAT_992BIT_2S_COMPLEMENT_INTEGER  1147
#define Z_VALUE_FORMAT_1000BIT_2S_COMPLEMENT_INTEGER 1148
#define Z_VALUE_FORMAT_1008BIT_2S_COMPLEMENT_INTEGER 1149
#define Z_VALUE_FORMAT_1016BIT_2S_COMPLEMENT_INTEGER 1140
#define Z_VALUE_FORMAT_1024BIT_2S_COMPLEMENT_INTEGER 1151

#define Z_VALUE_FORMAT_8BIT_1S_COMPLEMENT_INTEGER    2048
#define Z_VALUE_FORMAT_16BIT_1S_COMPLEMENT_INTEGER   2049
#define Z_VALUE_FORMAT_24BIT_1S_COMPLEMENT_INTEGER   2050
#define Z_VALUE_FORMAT_32BIT_1S_COMPLEMENT_INTEGER   2051
#define Z_VALUE_FORMAT_40BIT_1S_COMPLEMENT_INTEGER   2052
#define Z_VALUE_FORMAT_48BIT_1S_COMPLEMENT_INTEGER   2053
#define Z_VALUE_FORMAT_56BIT_1S_COMPLEMENT_INTEGER   2054
#define Z_VALUE_FORMAT_64BIT_1S_COMPLEMENT_INTEGER   2055
#define Z_VALUE_FORMAT_72BIT_1S_COMPLEMENT_INTEGER   2056
#define Z_VALUE_FORMAT_80BIT_1S_COMPLEMENT_INTEGER   2057
#define Z_VALUE_FORMAT_88BIT_1S_COMPLEMENT_INTEGER   2058
#define Z_VALUE_FORMAT_96BIT_1S_COMPLEMENT_INTEGER   2059
#define Z_VALUE_FORMAT_104BIT_1S_COMPLEMENT_INTEGER  2060
#define Z_VALUE_FORMAT_112BIT_1S_COMPLEMENT_INTEGER  2061
#define Z_VALUE_FORMAT_120BIT_1S_COMPLEMENT_INTEGER  2062
#define Z_VALUE_FORMAT_128BIT_1S_COMPLEMENT_INTEGER  2063
#define Z_VALUE_FORMAT_136BIT_1S_COMPLEMENT_INTEGER  2064
#define Z_VALUE_FORMAT_144BIT_1S_COMPLEMENT_INTEGER  2065
#define Z_VALUE_FORMAT_152BIT_1S_COMPLEMENT_INTEGER  2066
#define Z_VALUE_FORMAT_160BIT_1S_COMPLEMENT_INTEGER  2067
#define Z_VALUE_FORMAT_168BIT_1S_COMPLEMENT_INTEGER  2068
#define Z_VALUE_FORMAT_176BIT_1S_COMPLEMENT_INTEGER  2069
#define Z_VALUE_FORMAT_184BIT_1S_COMPLEMENT_INTEGER  2070
#define Z_VALUE_FORMAT_192BIT_1S_COMPLEMENT_INTEGER  2071
#define Z_VALUE_FORMAT_200BIT_1S_COMPLEMENT_INTEGER  2072
#define Z_VALUE_FORMAT_208BIT_1S_COMPLEMENT_INTEGER  2073
#define Z_VALUE_FORMAT_216BIT_1S_COMPLEMENT_INTEGER  2074
#define Z_VALUE_FORMAT_224BIT_1S_COMPLEMENT_INTEGER  2075
#define Z_VALUE_FORMAT_232BIT_1S_COMPLEMENT_INTEGER  2076
#define Z_VALUE_FORMAT_240BIT_1S_COMPLEMENT_INTEGER  2077
#define Z_VALUE_FORMAT_248BIT_1S_COMPLEMENT_INTEGER  2078
#define Z_VALUE_FORMAT_256BIT_1S_COMPLEMENT_INTEGER  2079
#define Z_VALUE_FORMAT_264BIT_1S_COMPLEMENT_INTEGER  2080
#define Z_VALUE_FORMAT_272BIT_1S_COMPLEMENT_INTEGER  2081
#define Z_VALUE_FORMAT_280BIT_1S_COMPLEMENT_INTEGER  2082
#define Z_VALUE_FORMAT_288BIT_1S_COMPLEMENT_INTEGER  2083
#define Z_VALUE_FORMAT_296BIT_1S_COMPLEMENT_INTEGER  2084
#define Z_VALUE_FORMAT_304BIT_1S_COMPLEMENT_INTEGER  2085
#define Z_VALUE_FORMAT_312BIT_1S_COMPLEMENT_INTEGER  2086
#define Z_VALUE_FORMAT_320BIT_1S_COMPLEMENT_INTEGER  2087
#define Z_VALUE_FORMAT_328BIT_1S_COMPLEMENT_INTEGER  2088
#define Z_VALUE_FORMAT_336BIT_1S_COMPLEMENT_INTEGER  2089
#define Z_VALUE_FORMAT_344BIT_1S_COMPLEMENT_INTEGER  2090
#define Z_VALUE_FORMAT_352BIT_1S_COMPLEMENT_INTEGER  2091
#define Z_VALUE_FORMAT_360BIT_1S_COMPLEMENT_INTEGER  2092
#define Z_VALUE_FORMAT_368BIT_1S_COMPLEMENT_INTEGER  2093
#define Z_VALUE_FORMAT_376BIT_1S_COMPLEMENT_INTEGER  2094
#define Z_VALUE_FORMAT_384BIT_1S_COMPLEMENT_INTEGER  2095
#define Z_VALUE_FORMAT_392BIT_1S_COMPLEMENT_INTEGER  2096
#define Z_VALUE_FORMAT_400BIT_1S_COMPLEMENT_INTEGER  2097
#define Z_VALUE_FORMAT_408BIT_1S_COMPLEMENT_INTEGER  2098
#define Z_VALUE_FORMAT_416BIT_1S_COMPLEMENT_INTEGER  2099
#define Z_VALUE_FORMAT_424BIT_1S_COMPLEMENT_INTEGER  2100
#define Z_VALUE_FORMAT_432BIT_1S_COMPLEMENT_INTEGER  2101
#define Z_VALUE_FORMAT_440BIT_1S_COMPLEMENT_INTEGER  2102
#define Z_VALUE_FORMAT_448BIT_1S_COMPLEMENT_INTEGER  2103
#define Z_VALUE_FORMAT_456BIT_1S_COMPLEMENT_INTEGER  2104
#define Z_VALUE_FORMAT_464BIT_1S_COMPLEMENT_INTEGER  2105
#define Z_VALUE_FORMAT_472BIT_1S_COMPLEMENT_INTEGER  2106
#define Z_VALUE_FORMAT_480BIT_1S_COMPLEMENT_INTEGER  2107
#define Z_VALUE_FORMAT_488BIT_1S_COMPLEMENT_INTEGER  2108
#define Z_VALUE_FORMAT_496BIT_1S_COMPLEMENT_INTEGER  2109
#define Z_VALUE_FORMAT_504BIT_1S_COMPLEMENT_INTEGER  2110
#define Z_VALUE_FORMAT_512BIT_1S_COMPLEMENT_INTEGER  2111
#define Z_VALUE_FORMAT_520BIT_1S_COMPLEMENT_INTEGER  2112
#define Z_VALUE_FORMAT_528BIT_1S_COMPLEMENT_INTEGER  2113
#define Z_VALUE_FORMAT_536BIT_1S_COMPLEMENT_INTEGER  2114
#define Z_VALUE_FORMAT_544BIT_1S_COMPLEMENT_INTEGER  2115
#define Z_VALUE_FORMAT_552BIT_1S_COMPLEMENT_INTEGER  2116
#define Z_VALUE_FORMAT_560BIT_1S_COMPLEMENT_INTEGER  2117
#define Z_VALUE_FORMAT_568BIT_1S_COMPLEMENT_INTEGER  2118
#define Z_VALUE_FORMAT_576BIT_1S_COMPLEMENT_INTEGER  2119
#define Z_VALUE_FORMAT_584BIT_1S_COMPLEMENT_INTEGER  2120
#define Z_VALUE_FORMAT_592BIT_1S_COMPLEMENT_INTEGER  2121
#define Z_VALUE_FORMAT_600BIT_1S_COMPLEMENT_INTEGER  2122
#define Z_VALUE_FORMAT_608BIT_1S_COMPLEMENT_INTEGER  2123
#define Z_VALUE_FORMAT_616BIT_1S_COMPLEMENT_INTEGER  2124
#define Z_VALUE_FORMAT_624BIT_1S_COMPLEMENT_INTEGER  2125
#define Z_VALUE_FORMAT_632BIT_1S_COMPLEMENT_INTEGER  2126
#define Z_VALUE_FORMAT_640BIT_1S_COMPLEMENT_INTEGER  2127
#define Z_VALUE_FORMAT_648BIT_1S_COMPLEMENT_INTEGER  2128
#define Z_VALUE_FORMAT_656BIT_1S_COMPLEMENT_INTEGER  2129
#define Z_VALUE_FORMAT_664BIT_1S_COMPLEMENT_INTEGER  2130
#define Z_VALUE_FORMAT_672BIT_1S_COMPLEMENT_INTEGER  2131
#define Z_VALUE_FORMAT_680BIT_1S_COMPLEMENT_INTEGER  2132
#define Z_VALUE_FORMAT_688BIT_1S_COMPLEMENT_INTEGER  2133
#define Z_VALUE_FORMAT_696BIT_1S_COMPLEMENT_INTEGER  2134
#define Z_VALUE_FORMAT_704BIT_1S_COMPLEMENT_INTEGER  2135
#define Z_VALUE_FORMAT_712BIT_1S_COMPLEMENT_INTEGER  2136
#define Z_VALUE_FORMAT_720BIT_1S_COMPLEMENT_INTEGER  2137
#define Z_VALUE_FORMAT_728BIT_1S_COMPLEMENT_INTEGER  2138
#define Z_VALUE_FORMAT_736BIT_1S_COMPLEMENT_INTEGER  2139
#define Z_VALUE_FORMAT_744BIT_1S_COMPLEMENT_INTEGER  2140
#define Z_VALUE_FORMAT_752BIT_1S_COMPLEMENT_INTEGER  2141
#define Z_VALUE_FORMAT_760BIT_1S_COMPLEMENT_INTEGER  2142
#define Z_VALUE_FORMAT_768BIT_1S_COMPLEMENT_INTEGER  2143
#define Z_VALUE_FORMAT_776BIT_1S_COMPLEMENT_INTEGER  2134
#define Z_VALUE_FORMAT_784BIT_1S_COMPLEMENT_INTEGER  2145
#define Z_VALUE_FORMAT_792BIT_1S_COMPLEMENT_INTEGER  2146
#define Z_VALUE_FORMAT_800BIT_1S_COMPLEMENT_INTEGER  2147
#define Z_VALUE_FORMAT_808BIT_1S_COMPLEMENT_INTEGER  2148
#define Z_VALUE_FORMAT_816BIT_1S_COMPLEMENT_INTEGER  2149
#define Z_VALUE_FORMAT_824BIT_1S_COMPLEMENT_INTEGER  2150
#define Z_VALUE_FORMAT_832BIT_1S_COMPLEMENT_INTEGER  2151
#define Z_VALUE_FORMAT_840BIT_1S_COMPLEMENT_INTEGER  2152
#define Z_VALUE_FORMAT_848BIT_1S_COMPLEMENT_INTEGER  2153
#define Z_VALUE_FORMAT_856BIT_1S_COMPLEMENT_INTEGER  2144
#define Z_VALUE_FORMAT_864BIT_1S_COMPLEMENT_INTEGER  2155
#define Z_VALUE_FORMAT_872BIT_1S_COMPLEMENT_INTEGER  2156
#define Z_VALUE_FORMAT_880BIT_1S_COMPLEMENT_INTEGER  2157
#define Z_VALUE_FORMAT_888BIT_1S_COMPLEMENT_INTEGER  2158
#define Z_VALUE_FORMAT_896BIT_1S_COMPLEMENT_INTEGER  2159
#define Z_VALUE_FORMAT_904BIT_1S_COMPLEMENT_INTEGER  2160
#define Z_VALUE_FORMAT_912BIT_1S_COMPLEMENT_INTEGER  2161
#define Z_VALUE_FORMAT_920BIT_1S_COMPLEMENT_INTEGER  2162
#define Z_VALUE_FORMAT_928BIT_1S_COMPLEMENT_INTEGER  2163
#define Z_VALUE_FORMAT_936BIT_1S_COMPLEMENT_INTEGER  2154
#define Z_VALUE_FORMAT_944BIT_1S_COMPLEMENT_INTEGER  2165
#define Z_VALUE_FORMAT_952BIT_1S_COMPLEMENT_INTEGER  2166
#define Z_VALUE_FORMAT_960BIT_1S_COMPLEMENT_INTEGER  2167
#define Z_VALUE_FORMAT_968BIT_1S_COMPLEMENT_INTEGER  2168
#define Z_VALUE_FORMAT_976BIT_1S_COMPLEMENT_INTEGER  2169
#define Z_VALUE_FORMAT_984BIT_1S_COMPLEMENT_INTEGER  2170
#define Z_VALUE_FORMAT_992BIT_1S_COMPLEMENT_INTEGER  2171
#define Z_VALUE_FORMAT_1000BIT_1S_COMPLEMENT_INTEGER 2172
#define Z_VALUE_FORMAT_1008BIT_1S_COMPLEMENT_INTEGER 2173
#define Z_VALUE_FORMAT_1016BIT_1S_COMPLEMENT_INTEGER 2164
#define Z_VALUE_FORMAT_1024BIT_1S_COMPLEMENT_INTEGER 2175

#define Z_VALUE_FORMAT_IEEE_754_BINARY16   3072
#define Z_VALUE_FORMAT_IEEE_754_BINARY32   3073
#define Z_VALUE_FORMAT_IEEE_754_BINARY64   3074
#define Z_VALUE_FORMAT_IEEE_754_BINARY128  3075
#define Z_VALUE_FORMAT_IEEE_754_BINARY256  3076
#define Z_VALUE_FORMAT_IEEE_754_DECIMAL32  3077
#define Z_VALUE_FORMAT_IEEE_754_DECIMAL64  3078
#define Z_VALUE_FORMAT_IEEE_754_DECIMAL128 3079

#define Z_VALUE_FORMAT_INTEL_FLOAT80	   3080
#define Z_VALUE_FORMAT_INTEL_FLOAT96	   3081
#define Z_VALUE_FORMAT_INTEL_FLOAT128	   3082

#define Z_KEY_BITS_VALUE_FORMAT	16
#define Z_KEY_LAST_VALUE_FORMAT	Z_VALUE_FORMAT_INTEL_FLOAT128

#endif /* __Z_keys_value_H__ */
