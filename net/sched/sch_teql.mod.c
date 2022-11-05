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
	{ 0x2453a8b0, "unregister_qdisc" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x28e76045, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xa511d5e8, "__neigh_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x194d2c79, "__neigh_event_send" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0xdb083c71, "neigh_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x9a977884, "noop_qdisc" },
	{ 0xc56d0063, "softnet_data" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3226a809, "qdisc_reset" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1428F5793E742EBA1F76FB");
