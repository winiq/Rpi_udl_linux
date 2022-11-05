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
	{ 0xf9a482f9, "msleep" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xf5dd1fa3, "snd_soc_put_volsw_range" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa1c4ee9a, "snd_soc_info_volsw_range" },
	{ 0x6cbf3f91, "snd_soc_get_volsw_range" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf6d0e8bb, "snd_soc_unregister_component" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x892a17eb, "snd_soc_component_test_bits" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "D075A9F760793EE5D2D6B10");
