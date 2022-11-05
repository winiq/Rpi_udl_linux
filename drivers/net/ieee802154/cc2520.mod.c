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
	{ 0xa7cd9a0b, "ieee802154_register_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2946bcef, "ieee802154_alloc_hw" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x42fd12c, "ieee802154_rx_irqsafe" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xc3300fd8, "gpiod_get_raw_value" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6257a2f, "complete" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x76198c1, "ieee802154_free_hw" },
	{ 0x7f4c84d1, "ieee802154_unregister_hw" },
	{ 0x2f2c95c4, "flush_work" },
};

MODULE_INFO(depends, "mac802154,crc-ccitt");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "A992E0182C0E32FB637FFAC");
