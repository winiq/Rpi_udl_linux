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
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "BD508A956A04F31CCFCCCD6");
