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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcdeede81, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x27699b8d, "fwnode_property_read_u8_array" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0x5dc00640, "single_open" },
	{ 0x48009c41, "debugfs_create_u8" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x416e5db, "single_release" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1632bc21, "kvasprintf_const" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0xbd19b5, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x2cee5f7a, "__get_task_comm" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x535c525f, "from_kuid" },
	{ 0xb8aac20c, "__sock_recv_wifi_status" },
	{ 0x9f64a537, "default_llseek" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x81d73695, "__sock_queue_rcv_skb" },
	{ 0xb341ba23, "device_del" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xca133eb5, "rfkill_alloc" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x38469ee5, "device_find_child" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xffb7c514, "ida_free" },
	{ 0x74341544, "iov_iter_kvec" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xbd6841d4, "crc16" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xcac26ace, "device_move" },
	{ 0x26509068, "sk_free" },
	{ 0xd7367af8, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xdd860064, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x753af3ce, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x1de95874, "simple_open" },
	{ 0x54674230, "crypto_shash_setkey" },
	{ 0x82baa22e, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd8bba1af, "sk_filter_trim_cap" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0xee507a81, "__sock_recv_timestamp" },
	{ 0x3cc5fd2c, "debugfs_attr_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0x6587c97e, "module_put" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x3e642ffa, "proto_register" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0xcb456a92, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x8b9342c3, "crypto_alloc_kpp" },
	{ 0x92997ed8, "_printk" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd4483c59, "put_cmsg" },
	{ 0x5f765358, "__pskb_copy_fclone" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0x148653, "vsnprintf" },
	{ 0xdd981006, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xc0346142, "device_initialize" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x265fe5e, "class_destroy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa4cab7c0, "debugfs_create_u16" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf96304d0, "crypto_shash_tfm_digest" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x76072819, "debugfs_attr_write" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbad97937, "__class_create" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc0b4422b, "simple_attr_open" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcedd4728, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "rfkill,ecdh_generic");


MODULE_INFO(srcversion, "D77FD8CD81CD20A76C2D6C7");