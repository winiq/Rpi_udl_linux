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
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x68b86252, "__rtnl_link_unregister" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xd7f37545, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xca8bfa7f, "netif_tx_stop_all_queues" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DAA5EB415E79CC155E0F36E");
