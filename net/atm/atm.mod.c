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
	{ 0xcdeede81, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x98cf60b3, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xcd5e5ea9, "send_sig" },
	{ 0xbedb1058, "_proc_mkdir" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xb341ba23, "device_del" },
	{ 0x7392091d, "device_register" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x7bd392d6, "sock_wake_async" },
	{ 0x26509068, "sk_free" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82baa22e, "init_net" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0x6587c97e, "module_put" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcb456a92, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a1e3c31, "remove_proc_subtree" },
	{ 0x2f2a1413, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xcedd4728, "skb_free_datagram" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "53D16AA9BB88659C2EBA3A4");
