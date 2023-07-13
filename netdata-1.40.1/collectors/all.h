// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_ALL_H
#define NETDATA_ALL_H 1

#include "daemon/common.h"

// netdata internal data collection plugins

#include "plugins.d/plugins_d.h"

// ----------------------------------------------------------------------------
// netdata chart priorities

// This is a work in progress - to scope is to collect here all chart priorities.
// These should be based on the CONTEXT of the charts + the chart id when needed
// - for each SECTION +1000 (or +X000 for big sections)
// - for each FAMILY  +100
// - for each CHART   +10

#define NETDATA_CHART_PRIO_SYSTEM_CPU                   100
#define NETDATA_CHART_PRIO_SYSTEM_LOAD                  100
#define NETDATA_CHART_PRIO_SYSTEM_IO                    150
#define NETDATA_CHART_PRIO_SYSTEM_PGPGIO                151
#define NETDATA_CHART_PRIO_SYSTEM_RAM                   200
#define NETDATA_CHART_PRIO_SYSTEM_SWAP                  201
#define NETDATA_CHART_PRIO_SYSTEM_SWAP_CALLS            202
#define NETDATA_CHART_PRIO_SYSTEM_SWAPIO                250
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAPIO               300
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_COMPRESS_RATIO  301
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_POOL_TOT_SIZE   302
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_STORED_PAGE     303
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_REJECTS         304
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_POOL_LIM_HIT    305
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_WRT_BACK_PAGES  306
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_SAME_FILL_PAGE  307
#define NETDATA_CHART_PRIO_SYSTEM_ZSWAP_DUPP_ENTRY      308
#define NETDATA_CHART_PRIO_SYSTEM_NET                   500
#define NETDATA_CHART_PRIO_SYSTEM_IPV4                  500 // freebsd only
#define NETDATA_CHART_PRIO_SYSTEM_IP                    501
#define NETDATA_CHART_PRIO_SYSTEM_IPV6                  502
#define NETDATA_CHART_PRIO_SYSTEM_PROCESSES             600
#define NETDATA_CHART_PRIO_SYSTEM_PROCESS_STATES        601
#define NETDATA_CHART_PRIO_SYSTEM_FORKS                 700
#define NETDATA_CHART_PRIO_SYSTEM_ACTIVE_PROCESSES      750
#define NETDATA_CHART_PRIO_SYSTEM_CTXT                  800
#define NETDATA_CHART_PRIO_SYSTEM_IDLEJITTER            800
#define NETDATA_CHART_PRIO_SYSTEM_INTR                  900
#define NETDATA_CHART_PRIO_SYSTEM_SOFTIRQS              950
#define NETDATA_CHART_PRIO_SYSTEM_SOFTNET_STAT          955
#define NETDATA_CHART_PRIO_SYSTEM_INTERRUPTS           1000
#define NETDATA_CHART_PRIO_SYSTEM_DEV_INTR             1000 // freebsd only
#define NETDATA_CHART_PRIO_SYSTEM_SOFT_INTR            1100 // freebsd only
#define NETDATA_CHART_PRIO_SYSTEM_ENTROPY              1000
#define NETDATA_CHART_PRIO_SYSTEM_UPTIME               1000
#define NETDATA_CHART_PRIO_CLOCK_SYNC_STATE            1100
#define NETDATA_CHART_PRIO_CLOCK_STATUS                1105
#define NETDATA_CHART_PRIO_CLOCK_SYNC_OFFSET           1110
#define NETDATA_CHART_PRIO_SYSTEM_IPC_MSQ_QUEUES       1200 // freebsd only
#define NETDATA_CHART_PRIO_SYSTEM_IPC_MSQ_MESSAGES     1201
#define NETDATA_CHART_PRIO_SYSTEM_IPC_MSQ_SIZE         1202
#define NETDATA_CHART_PRIO_SYSTEM_IPC_SEMAPHORES       1203
#define NETDATA_CHART_PRIO_SYSTEM_IPC_SEM_ARRAYS       1204
#define NETDATA_CHART_PRIO_SYSTEM_IPC_SHARED_MEM_SEGS  1205
#define NETDATA_CHART_PRIO_SYSTEM_IPC_SHARED_MEM_SIZE  1206
#define NETDATA_CHART_PRIO_SYSTEM_IPC_SHARED_MEM_CALLS 1207
#define NETDATA_CHART_PRIO_SYSTEM_PACKETS              7001 // freebsd only


// CPU per core

#define NETDATA_CHART_PRIO_CPU_PER_CORE               1000 // +1 per core
#define NETDATA_CHART_PRIO_CPU_TEMPERATURE            1050 // freebsd only
#define NETDATA_CHART_PRIO_CPUFREQ_SCALING_CUR_FREQ   5003 // freebsd only
#define NETDATA_CHART_PRIO_CPUIDLE                    6000

#define NETDATA_CHART_PRIO_CORE_THROTTLING            5001
#define NETDATA_CHART_PRIO_PACKAGE_THROTTLING         5002

// Interrupts per core

#define NETDATA_CHART_PRIO_INTERRUPTS_PER_CORE        1100 // +1 per core

// Memory Section - 1xxx

#define NETDATA_CHART_PRIO_MEM_SYSTEM_AVAILABLE       1010
#define NETDATA_CHART_PRIO_MEM_SYSTEM_OOM_KILL        1020
#define NETDATA_CHART_PRIO_MEM_SYSTEM_COMMITTED       1030
#define NETDATA_CHART_PRIO_MEM_SYSTEM_PGFAULTS        1040
#define NETDATA_CHART_PRIO_MEM_KERNEL                 1100
#define NETDATA_CHART_PRIO_MEM_SLAB                   1200
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES              1250
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_FAULTS       1251
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_FILE         1252
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_ZERO         1253
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_KHUGEPAGED   1254
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_SPLITS       1255
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_SWAPOUT      1256
#define NETDATA_CHART_PRIO_MEM_HUGEPAGES_COMPACT      1257
#define NETDATA_CHART_PRIO_MEM_KSM                    1300
#define NETDATA_CHART_PRIO_MEM_KSM_SAVINGS            1301
#define NETDATA_CHART_PRIO_MEM_KSM_RATIOS             1302
#define NETDATA_CHART_PRIO_MEM_KSM_COW                1303
#define NETDATA_CHART_PRIO_MEM_BALLOON                1350
#define NETDATA_CHART_PRIO_MEM_NUMA                   1400
#define NETDATA_CHART_PRIO_MEM_NUMA_NODES             1410
#define NETDATA_CHART_PRIO_MEM_PAGEFRAG               1450
#define NETDATA_CHART_PRIO_MEM_HW                     1500
#define NETDATA_CHART_PRIO_MEM_HW_ECC_CE              1550
#define NETDATA_CHART_PRIO_MEM_HW_ECC_UE              1560
#define NETDATA_CHART_PRIO_MEM_ZRAM                   1600
#define NETDATA_CHART_PRIO_MEM_ZRAM_SAVINGS           1601
#define NETDATA_CHART_PRIO_MEM_ZRAM_RATIO             1602
#define NETDATA_CHART_PRIO_MEM_ZRAM_EFFICIENCY        1603
#define NETDATA_CHART_PRIO_MEM_FRAGMENTATION          1700

// Disks

#define NETDATA_CHART_PRIO_DISK_IO                    2000
#define NETDATA_CHART_PRIO_DISK_OPS                   2010
#define NETDATA_CHART_PRIO_DISK_QOPS                  2015
#define NETDATA_CHART_PRIO_DISK_BACKLOG               2020
#define NETDATA_CHART_PRIO_DISK_BUSY                  2030
#define NETDATA_CHART_PRIO_DISK_UTIL                  2040
#define NETDATA_CHART_PRIO_DISK_AWAIT                 2050
#define NETDATA_CHART_PRIO_DISK_AVGSZ                 2060
#define NETDATA_CHART_PRIO_DISK_SVCTM                 2070
#define NETDATA_CHART_PRIO_DISK_MOPS                  2080
#define NETDATA_CHART_PRIO_DISK_IOTIME                2090
#define NETDATA_CHART_PRIO_DISK_LATENCY               2095
#define NETDATA_CHART_PRIO_BCACHE_CACHE_ALLOC         2120
#define NETDATA_CHART_PRIO_BCACHE_HIT_RATIO           2120
#define NETDATA_CHART_PRIO_BCACHE_RATES               2121
#define NETDATA_CHART_PRIO_BCACHE_SIZE                2122
#define NETDATA_CHART_PRIO_BCACHE_USAGE               2123
#define NETDATA_CHART_PRIO_BCACHE_OPS                 2124
#define NETDATA_CHART_PRIO_BCACHE_BYPASS              2125
#define NETDATA_CHART_PRIO_BCACHE_CACHE_READ_RACES    2126

#define NETDATA_CHART_PRIO_DISKSPACE_SPACE            2023
#define NETDATA_CHART_PRIO_DISKSPACE_INODES           2024

// MDSTAT

#define NETDATA_CHART_PRIO_MDSTAT_HEALTH              2100
#define NETDATA_CHART_PRIO_MDSTAT_FLUSH               2101
#define NETDATA_CHART_PRIO_MDSTAT_NONREDUNDANT        2105
#define NETDATA_CHART_PRIO_MDSTAT_DISKS               2106 // 5 charts per raid
#define NETDATA_CHART_PRIO_MDSTAT_MISMATCH            2107
#define NETDATA_CHART_PRIO_MDSTAT_OPERATION           2108
#define NETDATA_CHART_PRIO_MDSTAT_FINISH              2109
#define NETDATA_CHART_PRIO_MDSTAT_SPEED               2110

// Filesystem
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_CLEAN       2150
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_COUNT    2151
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_BYTES    2152
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_EBYTES   2153
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_FSYNC    2154
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_EFSYNC   2155
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_OPEN     2156
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_EOPEN    2157
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_CREATE   2158
#define NETDATA_CHART_PRIO_FILESYSTEM_VFS_IO_ECREATE  2159

#define NETDATA_CHART_PRIO_EBPF_FILESYSTEM_CHARTS     2160

// Mount Points
#define NETDATA_CHART_PRIO_EBPF_MOUNT_CHARTS          2190

// File descriptor
#define NETDATA_CHART_PRIO_EBPF_FD_CHARTS             2195


// NFS (server)

#define NETDATA_CHART_PRIO_NFSD_READCACHE             2200
#define NETDATA_CHART_PRIO_NFSD_FILEHANDLES           2201
#define NETDATA_CHART_PRIO_NFSD_IO                    2202
#define NETDATA_CHART_PRIO_NFSD_THREADS               2203
#define NETDATA_CHART_PRIO_NFSD_THREADS_FULLCNT       2204
#define NETDATA_CHART_PRIO_NFSD_THREADS_HISTOGRAM     2205
#define NETDATA_CHART_PRIO_NFSD_READAHEAD             2205
#define NETDATA_CHART_PRIO_NFSD_NET                   2207
#define NETDATA_CHART_PRIO_NFSD_RPC                   2208
#define NETDATA_CHART_PRIO_NFSD_PROC2                 2209
#define NETDATA_CHART_PRIO_NFSD_PROC3                 2210
#define NETDATA_CHART_PRIO_NFSD_PROC4                 2211
#define NETDATA_CHART_PRIO_NFSD_PROC4OPS              2212

// NFS (client)

#define NETDATA_CHART_PRIO_NFS_NET                    2307
#define NETDATA_CHART_PRIO_NFS_RPC                    2308
#define NETDATA_CHART_PRIO_NFS_PROC2                  2309
#define NETDATA_CHART_PRIO_NFS_PROC3                  2310
#define NETDATA_CHART_PRIO_NFS_PROC4                  2311

// BTRFS

#define NETDATA_CHART_PRIO_BTRFS_DISK                 2400
#define NETDATA_CHART_PRIO_BTRFS_DATA                 2401
#define NETDATA_CHART_PRIO_BTRFS_METADATA             2402
#define NETDATA_CHART_PRIO_BTRFS_SYSTEM               2403
#define NETDATA_CHART_PRIO_BTRFS_COMMITS              2404
#define NETDATA_CHART_PRIO_BTRFS_COMMITS_PERC_TIME    2405
#define NETDATA_CHART_PRIO_BTRFS_COMMIT_TIMINGS       2406
#define NETDATA_CHART_PRIO_BTRFS_ERRORS               2407

// ZFS

#define NETDATA_CHART_PRIO_ZFS_ARC_SIZE               2500
#define NETDATA_CHART_PRIO_ZFS_L2_SIZE                2500
#define NETDATA_CHART_PRIO_ZFS_READS                  2510
#define NETDATA_CHART_PRIO_ZFS_ACTUAL_HITS            2519
#define NETDATA_CHART_PRIO_ZFS_ARC_SIZE_BREAKDOWN     2520
#define NETDATA_CHART_PRIO_ZFS_IMPORTANT_OPS          2522
#define NETDATA_CHART_PRIO_ZFS_MEMORY_OPS             2523
#define NETDATA_CHART_PRIO_ZFS_IO                     2700
#define NETDATA_CHART_PRIO_ZFS_HITS                   2520
#define NETDATA_CHART_PRIO_ZFS_DHITS                  2530
#define NETDATA_CHART_PRIO_ZFS_DEMAND_DATA_HITS       2540
#define NETDATA_CHART_PRIO_ZFS_PREFETCH_DATA_HITS     2550
#define NETDATA_CHART_PRIO_ZFS_PHITS                  2560
#define NETDATA_CHART_PRIO_ZFS_MHITS                  2570
#define NETDATA_CHART_PRIO_ZFS_L2HITS                 2580
#define NETDATA_CHART_PRIO_ZFS_LIST_HITS              2600
#define NETDATA_CHART_PRIO_ZFS_HASH_ELEMENTS          2800
#define NETDATA_CHART_PRIO_ZFS_HASH_CHAINS            2810

#define NETDATA_CHART_PRIO_ZFS_POOL_STATE             2820

// HARDIRQS

#define NETDATA_CHART_PRIO_HARDIRQ_LATENCY            2900

// SOFTIRQs

#define NETDATA_CHART_PRIO_SOFTIRQS_PER_CORE          3000 // +1 per core

// IPFW (freebsd)

#define NETDATA_CHART_PRIO_IPFW_PACKETS               3001
#define NETDATA_CHART_PRIO_IPFW_BYTES                 3002
#define NETDATA_CHART_PRIO_IPFW_ACTIVE                3003
#define NETDATA_CHART_PRIO_IPFW_EXPIRED               3004
#define NETDATA_CHART_PRIO_IPFW_MEM                   3005


// IPVS

#define NETDATA_CHART_PRIO_IPVS_NET                   3100
#define NETDATA_CHART_PRIO_IPVS_SOCKETS               3101
#define NETDATA_CHART_PRIO_IPVS_PACKETS               3102

// Softnet

#define NETDATA_CHART_PRIO_SOFTNET_PER_CORE           4101 // +1 per core

// IP STACK

#define NETDATA_CHART_PRIO_IP_ERRORS                  4100
#define NETDATA_CHART_PRIO_IP_TCP_CONNABORTS          4210
#define NETDATA_CHART_PRIO_IP_TCP_SYN_QUEUE           4215
#define NETDATA_CHART_PRIO_IP_TCP_ACCEPT_QUEUE        4216
#define NETDATA_CHART_PRIO_IP_TCP_REORDERS            4220
#define NETDATA_CHART_PRIO_IP_TCP_OFO                 4250
#define NETDATA_CHART_PRIO_IP_TCP_SYNCOOKIES          4260
#define NETDATA_CHART_PRIO_IP_TCP_MEM                 4290
#define NETDATA_CHART_PRIO_IP_BCAST                   4500
#define NETDATA_CHART_PRIO_IP_BCAST_PACKETS           4510
#define NETDATA_CHART_PRIO_IP_MCAST                   4600
#define NETDATA_CHART_PRIO_IP_MCAST_PACKETS           4610
#define NETDATA_CHART_PRIO_IP_ECN                     4700

// IPv4

#define NETDATA_CHART_PRIO_IPV4_SOCKETS               5100
#define NETDATA_CHART_PRIO_IPV4_PACKETS               5130
#define NETDATA_CHART_PRIO_IPV4_ERRORS                5150
#define NETDATA_CHART_PRIO_IPV4_ICMP                  5170
#define NETDATA_CHART_PRIO_IPV4_TCP                   5200
#define NETDATA_CHART_PRIO_IPV4_TCP_SOCKETS           5201
#define NETDATA_CHART_PRIO_IPV4_TCP_MEM               5290
#define NETDATA_CHART_PRIO_IPV4_UDP                   5300
#define NETDATA_CHART_PRIO_IPV4_UDP_MEM               5390
#define NETDATA_CHART_PRIO_IPV4_UDPLITE               5400
#define NETDATA_CHART_PRIO_IPV4_RAW                   5450
#define NETDATA_CHART_PRIO_IPV4_FRAGMENTS             5460
#define NETDATA_CHART_PRIO_IPV4_FRAGMENTS_MEM         5470

// IPv6

#define NETDATA_CHART_PRIO_IPV6_PACKETS               6200
#define NETDATA_CHART_PRIO_IPV6_ECT                   6210
#define NETDATA_CHART_PRIO_IPV6_ERRORS                6300
#define NETDATA_CHART_PRIO_IPV6_FRAGMENTS             6400
#define NETDATA_CHART_PRIO_IPV6_FRAGSOUT              6401
#define NETDATA_CHART_PRIO_IPV6_FRAGSIN               6402
#define NETDATA_CHART_PRIO_IPV6_TCP                   6500
#define NETDATA_CHART_PRIO_IPV6_UDP                   6600
#define NETDATA_CHART_PRIO_IPV6_UDP_PACKETS           6601
#define NETDATA_CHART_PRIO_IPV6_UDP_ERRORS            6610
#define NETDATA_CHART_PRIO_IPV6_UDPLITE               6700
#define NETDATA_CHART_PRIO_IPV6_UDPLITE_PACKETS       6701
#define NETDATA_CHART_PRIO_IPV6_UDPLITE_ERRORS        6710
#define NETDATA_CHART_PRIO_IPV6_RAW                   6800
#define NETDATA_CHART_PRIO_IPV6_BCAST                 6840
#define NETDATA_CHART_PRIO_IPV6_MCAST                 6850
#define NETDATA_CHART_PRIO_IPV6_MCAST_PACKETS         6851
#define NETDATA_CHART_PRIO_IPV6_ICMP                  6900
#define NETDATA_CHART_PRIO_IPV6_ICMP_REDIR            6910
#define NETDATA_CHART_PRIO_IPV6_ICMP_ERRORS           6920
#define NETDATA_CHART_PRIO_IPV6_ICMP_ECHOS            6930
#define NETDATA_CHART_PRIO_IPV6_ICMP_GROUPMEMB        6940
#define NETDATA_CHART_PRIO_IPV6_ICMP_ROUTER           6950
#define NETDATA_CHART_PRIO_IPV6_ICMP_NEIGHBOR         6960
#define NETDATA_CHART_PRIO_IPV6_ICMP_LDV2             6970
#define NETDATA_CHART_PRIO_IPV6_ICMP_TYPES            6980


// Network interfaces

#define NETDATA_CHART_PRIO_FIRST_NET_IFACE            7000 // 6 charts per interface
#define NETDATA_CHART_PRIO_FIRST_NET_PACKETS          7001
#define NETDATA_CHART_PRIO_FIRST_NET_ERRORS           7002
#define NETDATA_CHART_PRIO_FIRST_NET_DROPS            7003
#define NETDATA_CHART_PRIO_FIRST_NET_EVENTS           7006
#define NETDATA_CHART_PRIO_CGROUP_NET_IFACE          43000

// SCTP

#define NETDATA_CHART_PRIO_SCTP                       7000

// QoS

#define NETDATA_CHART_PRIO_TC_QOS                     7000
#define NETDATA_CHART_PRIO_TC_QOS_PACKETS             7010
#define NETDATA_CHART_PRIO_TC_QOS_DROPPED             7020
#define NETDATA_CHART_PRIO_TC_QOS_TOKENS              7030
#define NETDATA_CHART_PRIO_TC_QOS_CTOKENS             7040

// Infiniband
#define NETDATA_CHART_PRIO_INFINIBAND                 7100

// Netfilter

#define NETDATA_CHART_PRIO_NETFILTER_SOCKETS          8700
#define NETDATA_CHART_PRIO_NETFILTER_NEW              8701
#define NETDATA_CHART_PRIO_NETFILTER_CHANGES          8702
#define NETDATA_CHART_PRIO_NETFILTER_EXPECT           8703
#define NETDATA_CHART_PRIO_NETFILTER_ERRORS           8705
#define NETDATA_CHART_PRIO_NETFILTER_SEARCH           8710

// SYNPROXY

#define NETDATA_CHART_PRIO_SYNPROXY_SYN_RECEIVED      8751
#define NETDATA_CHART_PRIO_SYNPROXY_COOKIES           8752
#define NETDATA_CHART_PRIO_SYNPROXY_CONN_OPEN         8753
#define NETDATA_CHART_PRIO_SYNPROXY_ENTRIES           8754

// Linux Power Supply

#define NETDATA_CHART_PRIO_POWER_SUPPLY_CAPACITY      9500 // 4 charts per power supply
#define NETDATA_CHART_PRIO_POWER_SUPPLY_CHARGE        9501
#define NETDATA_CHART_PRIO_POWER_SUPPLY_ENERGY        9502
#define NETDATA_CHART_PRIO_POWER_SUPPLY_VOLTAGE       9503


// Wireless

#define NETDATA_CHART_PRIO_WIRELESS_IFACE	     7110

// CGROUPS

#define NETDATA_CHART_PRIO_CGROUPS_SYSTEMD           19000 // many charts
#define NETDATA_CHART_PRIO_CGROUPS_CONTAINERS        40000 // many charts

// STATSD

#define NETDATA_CHART_PRIO_STATSD_PRIVATE            90000 // many charts

// INTERNAL NETDATA INFO

#define NETDATA_CHART_PRIO_CHECKS                    99999

#define NETDATA_CHART_PRIO_NETDATA_TIMEX            132030
#define NETDATA_CHART_PRIO_NETDATA_TC_TIME          1000100

// NETDATA ML CHARTS

// [ml] charts
#define ML_CHART_PRIO_DIMENSIONS        39181
#define ML_CHART_PRIO_ANOMALY_RATE      39182
#define ML_CHART_PRIO_DETECTOR_EVENTS   39183

// [netdata.ml] charts
#define NETDATA_ML_CHART_PRIO_MACHINE_LEARNING_STATUS 890001
#define NETDATA_ML_CHART_PRIO_METRIC_TYPES            890002
#define NETDATA_ML_CHART_PRIO_TRAINING_STATUS         890003

#define NETDATA_ML_CHART_PRIO_PREDICTION_USAGE        890004
#define NETDATA_ML_CHART_PRIO_TRAINING_USAGE          890005

#define NETDATA_ML_CHART_PRIO_QUEUE_STATS             890006
#define NETDATA_ML_CHART_PRIO_TRAINING_TIME_STATS     890007
#define NETDATA_ML_CHART_PRIO_TRAINING_RESULTS        890008

#define NETDATA_ML_CHART_FAMILY "machine learning"
#define NETDATA_ML_PLUGIN "ml.plugin"
#define NETDATA_ML_MODULE_TRAINING "training"
#define NETDATA_ML_MODULE_DETECTION "detection"
#define NETDATA_ML_MODULE_PREDICTION "prediction"


#endif //NETDATA_ALL_H