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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xf5dd1fa3, "snd_soc_put_volsw_range" },
	{ 0xa1c4ee9a, "snd_soc_info_volsw_range" },
	{ 0x6cbf3f91, "snd_soc_get_volsw_range" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:tas5707");
MODULE_ALIAS("i2c:tas5711");
MODULE_ALIAS("i2c:tas5717");
MODULE_ALIAS("i2c:tas5719");
MODULE_ALIAS("i2c:tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5707");
MODULE_ALIAS("of:N*T*Cti,tas5707C*");
MODULE_ALIAS("of:N*T*Cti,tas5711");
MODULE_ALIAS("of:N*T*Cti,tas5711C*");
MODULE_ALIAS("of:N*T*Cti,tas5717");
MODULE_ALIAS("of:N*T*Cti,tas5717C*");
MODULE_ALIAS("of:N*T*Cti,tas5719");
MODULE_ALIAS("of:N*T*Cti,tas5719C*");
MODULE_ALIAS("of:N*T*Cti,tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5721C*");

MODULE_INFO(srcversion, "764864A7D6C2A09B5C20E9E");
