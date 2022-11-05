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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x349cba85, "strchr" },
	{ 0xd17c8ecb, "napi_disable" },
	{ 0x91929663, "napi_schedule_prep" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0xa0c144bc, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x3a89a4be, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb1022be5, "__napi_schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6029663b, "napi_complete_done" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xc3300fd8, "gpiod_get_raw_value" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc141b166, "devm_platform_get_and_ioremap_resource" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A85EE68F372BC98FC30CA66");
