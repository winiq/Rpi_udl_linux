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
	{ 0xdd0d3a1f, "class_find_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0xcdeede81, "release_sock" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1533ec67, "genl_register_family" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xead00af0, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x7f871508, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xb8aac20c, "__sock_recv_wifi_status" },
	{ 0xb341ba23, "device_del" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xb3606e83, "class_dev_iter_init" },
	{ 0xca133eb5, "rfkill_alloc" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x638c7455, "ns_capable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xd367601c, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x753af3ce, "device_add" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x82baa22e, "init_net" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0xee507a81, "__sock_recv_timestamp" },
	{ 0x6587c97e, "module_put" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xeea50d0c, "netlink_broadcast" },
	{ 0x81822a88, "put_device" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0xcb456a92, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa59ae8a0, "class_dev_iter_exit" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0x5f765358, "__pskb_copy_fclone" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x61ac310c, "genlmsg_put" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa951517, "sock_no_sendmsg" },
	{ 0xc0346142, "device_initialize" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe22d1723, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x1d673ffd, "class_dev_iter_next" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xcedd4728, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "8527443BE3DF872A20EA59B");
