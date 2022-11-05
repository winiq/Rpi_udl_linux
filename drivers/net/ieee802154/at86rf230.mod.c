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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa7cd9a0b, "ieee802154_register_hw" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0x2946bcef, "ieee802154_alloc_hw" },
	{ 0xfc0c9a7b, "of_property_read_variable_u8_array" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x76198c1, "ieee802154_free_hw" },
	{ 0x7f4c84d1, "ieee802154_unregister_hw" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xd9d068df, "ieee802154_wake_queue" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x634a25de, "ieee802154_xmit_complete" },
	{ 0x42fd12c, "ieee802154_rx_irqsafe" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6903f4f, "spi_async" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "0EC75018B40662F48ADF739");
