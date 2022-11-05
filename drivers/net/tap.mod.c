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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0x3c81c627, "cdev_init" },
	{ 0xf73c85f0, "iov_iter_npages" },
	{ 0x88cc38b3, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xa70fb761, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8da16983, "__skb_flow_dissect" },
	{ 0x7273d90b, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4e24f4cc, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x1bd7c24a, "skb_partial_csum_set" },
	{ 0xfdd9cda, "kfree_skb_list" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2653f555, "build_skb" },
	{ 0xd394de53, "cdev_add" },
	{ 0x4de164cf, "dev_set_mac_address_user" },
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4af593fc, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x93b2934b, "dev_get_mac_address" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xa32c31ff, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x9d7cedcf, "zerocopy_sg_from_iter" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "01BB38EFC4D155DA584B277");
