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
	{ 0x10feca47, "can_change_mtu" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x26c10440, "open_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x41364173, "close_candev" },
	{ 0x7088be82, "unregister_candev" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0x9609ced3, "devm_gpiochip_add_data_with_key" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x821a8c68, "register_candev" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2fc6088a, "free_candev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f770116, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8f3f6265, "devm_clk_get_optional" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xffb35a2a, "can_put_echo_skb" },
	{ 0x4378af6a, "can_get_echo_skb" },
	{ 0x46a5c76c, "can_bus_off" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c78196, "alloc_can_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x78305fec, "alloc_can_err_skb" },
	{ 0xc8c38beb, "can_free_echo_skb" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "060D70B92ABE24B2922A4BE");
