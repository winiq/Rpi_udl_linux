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
	{ 0x741facb8, "kobject_put" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x16bfcba2, "kset_create_and_add" },
	{ 0xcdeede81, "release_sock" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd27e44a6, "locks_copy_lock" },
	{ 0x747565f3, "sock_bind_add" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1533ec67, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0xead00af0, "genl_unregister_family" },
	{ 0xfe0773ee, "tcp_sock_set_nodelay" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xf8d5f58c, "sock_release" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x94dd71af, "__srcu_read_unlock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbf3a8ac9, "config_item_put" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xe742e84a, "sock_create_kern" },
	{ 0x9c2fc960, "config_item_init_type_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xba7b3b54, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x5cf4842, "sock_set_reuseaddr" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xff8c835f, "sock_set_rcvbuf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x84e68fa2, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9e047ec0, "__srcu_read_lock" },
	{ 0xc9cf32f3, "configfs_remove_default_groups" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xf9c2f1a3, "configfs_register_subsystem" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xce807a25, "up_write" },
	{ 0x82baa22e, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6587c97e, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x2acf732, "kernel_sendpage" },
	{ 0x5e6c00e3, "locks_init_lock" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7f787b01, "sock_set_sndtimeo" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9d6d904, "locks_lock_inode_wait" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xf2aacfa6, "configfs_unregister_subsystem" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x4a57682b, "kernel_recvmsg" },
	{ 0x5e5564e7, "kernel_accept" },
	{ 0x7587986b, "synchronize_srcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6fa2c222, "call_srcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe9790907, "kernel_kobj" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x98e6e6f2, "kset_unregister" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x4788a426, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x61ac310c, "genlmsg_put" },
	{ 0x106c9f0d, "kernel_bind" },
	{ 0xf026d4d, "config_item_get" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca9360b5, "rb_next" },
	{ 0xcd23c4d7, "sock_set_mark" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8faa70ae, "nla_reserve" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5958ec7, "config_group_find_item" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdc449511, "config_group_init" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FEEF23F9E67FE5642840D86");