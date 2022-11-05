#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcdeede81, "release_sock" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xd62ecd49, "rps_sock_flow_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xdee01bc4, "ip_getsockopt" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9a6b68c3, "reuseport_detach_sock" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe9317d4b, "ipv6_getsockopt" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc569d8e9, "ipv6_chk_addr" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xfa73eab4, "ip_setsockopt" },
	{ 0x7da9e8ce, "security_inet_conn_established" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xa045041a, "inet6_add_protocol" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xcd5e5ea9, "send_sig" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8001c0d4, "sk_setup_caps" },
	{ 0xbedb1058, "_proc_mkdir" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xbc794b62, "security_sctp_bind_connect" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xf8d5f58c, "sock_release" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6b46d2d4, "inet_sk_set_state" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xdd3bf30b, "proc_create_net_single" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb593a783, "udp_tunnel_xmit_skb" },
	{ 0x3ac3feba, "rhltable_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x28d5e6d0, "ipv6_dup_options" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf1c53e26, "inet_sendmsg" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0xb721bcf4, "inet6_release" },
	{ 0xae316c11, "icmpv6_err_convert" },
	{ 0x52b6259e, "inet6_register_protosw" },
	{ 0x3ff125d, "reuseport_alloc" },
	{ 0x9ebdbd2e, "__skb_checksum" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xb9a02d17, "skb_set_owner_w" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xd575022a, "inet_del_protocol" },
	{ 0xc64416e5, "security_sctp_assoc_request" },
	{ 0xaeecd251, "ip6_xmit" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0x99e9845b, "inet6_getname" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xf2b33cb7, "memory_cgrp_subsys_on_dfl_key" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0x4fdf3088, "sk_common_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xd80a9520, "udp_sock_create6" },
	{ 0x4c7f7973, "setup_udp_tunnel_sock" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xb25007db, "udp_tunnel_sock_release" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x21207e1d, "ip6_dst_lookup_flow" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3dabf271, "memcg_sockets_enabled_key" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0xa5c7b0e, "inet6_ioctl" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xce97b13d, "inet_addr_type" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x638c7455, "ns_capable" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe590dea3, "sk_busy_loop_end" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x56802ae8, "rps_cpu_mask" },
	{ 0x143a6904, "sock_prot_inuse_add" },
	{ 0xd2c99738, "__kmalloc_track_caller" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x5a921311, "strncmp" },
	{ 0x3f2092e3, "fl6_update_dst" },
	{ 0xea070fe2, "__sk_mem_reclaim" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0xa86bce68, "__ip_queue_xmit" },
	{ 0xb7377510, "skb_push" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xa988287f, "inet_del_offload" },
	{ 0x954f099c, "idr_preload" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0x7bd392d6, "sock_wake_async" },
	{ 0x26509068, "sk_free" },
	{ 0x8da89656, "inet_shutdown" },
	{ 0x87011638, "inet_add_protocol" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x12b6e323, "inet_add_offload" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x54674230, "crypto_shash_setkey" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xd313214f, "inet_accept" },
	{ 0xa5c5220d, "fput" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xd8bba1af, "sk_filter_trim_cap" },
	{ 0x319d493d, "proc_dostring" },
	{ 0xadd23643, "reuseport_select_sock" },
	{ 0x7f303731, "reuseport_add_sock" },
	{ 0xf47d49c1, "inet_ioctl" },
	{ 0x68ae8650, "inet_ctl_sock_create" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x29604158, "napi_busy_loop" },
	{ 0xadd139d4, "rfs_needed" },
	{ 0x4c6fac3c, "inet6_compat_ioctl" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0x3e642ffa, "proto_register" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xf2322db, "inet_release" },
	{ 0x50f91491, "__genradix_ptr" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x54e6fcdd, "net_enable_timestamp" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xcea0c0ff, "security_sctp_sk_clone" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0xd50d5b1c, "inet_getname" },
	{ 0x92997ed8, "_printk" },
	{ 0x47f8d635, "__get_hash_from_flowi6" },
	{ 0x4044b6ed, "inet6_del_protocol" },
	{ 0xba57a578, "sock_kmalloc" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xb15fc66e, "inet_sock_destruct" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0xd4483c59, "put_cmsg" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0xc71e64a9, "snmp_get_cpu_field" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x64b1c1a, "sock_alloc_file" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x3ae1728a, "ipv6_setsockopt" },
	{ 0x9b67643d, "__sk_mem_schedule" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a1e3c31, "remove_proc_subtree" },
	{ 0xd510b4a8, "sock_common_setsockopt" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x9f7c7f8a, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5a20ed2, "__genradix_prealloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0xcd8d4fd5, "fd_install" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xf2b51fde, "sock_create" },
	{ 0xf14123a0, "inet_bind" },
	{ 0x6715e0ac, "sock_common_getsockopt" },
	{ 0xe00befce, "udp_tunnel6_xmit_skb" },
	{ 0xd1805548, "__ip_dev_find" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x41c5cf32, "skb_segment" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5be63c5b, "crc32c_csum_stub" },
	{ 0x912da87a, "inet6_unregister_protosw" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x6e938f72, "udp_sock_create4" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9d69eb85, "inet6_bind" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf96304d0, "crypto_shash_tfm_digest" },
	{ 0x635466f0, "inet6_add_offload" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xff6e75e2, "ip6_dst_hoplimit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xfd7b465b, "__fl6_sock_lookup" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0xe22d1723, "skb_put" },
	{ 0xaa7206e7, "sock_wfree" },
	{ 0x20978fb9, "idr_find" },
	{ 0x97d8dd5d, "inet_unregister_protosw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x506dff1a, "__genradix_free" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x338daa43, "inet_get_local_port_range" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0x200b2041, "in6addr_any" },
	{ 0xe485776c, "inet6_destroy_sock" },
	{ 0xc1dda2a, "inet_recvmsg" },
};

MODULE_INFO(depends, "ipv6,udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "215F4B3E8375863293A78EB");