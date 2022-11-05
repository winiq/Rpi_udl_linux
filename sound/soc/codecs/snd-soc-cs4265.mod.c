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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x53bf0f15, "snd_soc_get_volsw_sx" },
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x70e69b22, "snd_soc_dapm_get_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0xd25a8945, "snd_soc_info_volsw_sx" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xa0214777, "snd_soc_bytes_info" },
	{ 0x799c125a, "snd_soc_dapm_put_volsw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xa265b279, "snd_soc_bytes_get" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xb8566d08, "snd_soc_bytes_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x509c2201, "snd_soc_put_volsw_sx" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "2E459F5F5212963E739F2B4");
