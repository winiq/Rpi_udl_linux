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
	{ 0x52829b9d, "spi_sync" },
	{ 0xa7cd9a0b, "ieee802154_register_hw" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0x2946bcef, "ieee802154_alloc_hw" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x3e133aeb, "regmap_write_async" },
	{ 0x634a25de, "ieee802154_xmit_complete" },
	{ 0x42fd12c, "ieee802154_rx_irqsafe" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6903f4f, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x76198c1, "ieee802154_free_hw" },
	{ 0x7f4c84d1, "ieee802154_unregister_hw" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "0A808BC1EC678E2F8FAFC1E");
