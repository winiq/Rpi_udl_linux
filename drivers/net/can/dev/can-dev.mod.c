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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x1b673a2e, "skb_clone_tx_timestamp" },
	{ 0x91929663, "napi_schedule_prep" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x4249472a, "sock_efree" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xd367601c, "nla_put" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0xa0c144bc, "napi_enable" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x3a89a4be, "netif_napi_add" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xb1022be5, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x6029663b, "napi_complete_done" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc00689ca, "__netif_napi_del" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x853ef3c3, "skb_tstamp_tx" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xe22d1723, "skb_put" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A64F8A60A49E22701BDE356");
