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
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x27c801d9, "l2tp_nl_register_ops" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe9f81aa1, "l2tp_session_delete" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd981006, "__module_get" },
	{ 0xe5b59a36, "l2tp_session_dec_refcount" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xf167b5c3, "l2tp_session_register" },
	{ 0x33ae33fd, "l2tp_session_inc_refcount" },
	{ 0xcdeede81, "release_sock" },
	{ 0x86ed5878, "kernel_sock_ip_overhead" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xd5366728, "l2tp_session_create" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x54113cf4, "dst_release" },
	{ 0xb81e522e, "__skb_ext_del" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaa9af6b5, "dev_forward_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe6be485b, "l2tp_xmit_skb" },
	{ 0x6587c97e, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc81758e5, "ether_setup" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "0A1F67DCE4201271045C901");
