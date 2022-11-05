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
	{ 0x826655e4, "param_ops_int" },
	{ 0xc0f38e3d, "ethtool_op_get_ts_info" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x68b86252, "__rtnl_link_unregister" },
	{ 0xd7f37545, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x853ef3c3, "skb_tstamp_tx" },
	{ 0x1b673a2e, "skb_clone_tx_timestamp" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x2707a730, "dev_lstats_read" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x5792f848, "strlcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FF4E52F56FABB1B2C174B53");
