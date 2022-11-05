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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x6597f682, "hid_add_device" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0x3d22892, "hid_ignore" },
	{ 0x53b954a2, "up_read" },
	{ 0x2200632e, "kernel_sendmsg" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x836b530a, "hid_parse_report" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6cf03572, "bt_sock_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2321f01c, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x8be5359e, "sock_no_recvmsg" },
	{ 0xcfb7f3a8, "bt_sock_unlink" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xa87eaa78, "l2cap_conn_put" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa73c1905, "l2cap_is_socket" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x82baa22e, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa5c5220d, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x359afe9f, "bt_sock_link" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x4e554f32, "l2cap_register_user" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x71a1306d, "__module_put_and_exit" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x97115630, "hid_destroy_device" },
	{ 0xcb5b8698, "hid_allocate_device" },
	{ 0x8c7b2457, "l2cap_conn_get" },
	{ 0xadc9aed4, "get_device" },
	{ 0xdd981006, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xa951517, "sock_no_sendmsg" },
	{ 0xf33d52d1, "set_user_nice" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70c0eefd, "bt_procfs_init" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf22378, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0x5f2ecf5d, "l2cap_unregister_user" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7815C62C6C19A44DB6EEFE3");
