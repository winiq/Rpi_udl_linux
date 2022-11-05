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
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x3a44f066, "snd_pcm_hw_constraint_msbits" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xeb70268e, "snd_soc_unregister_card" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xd6b5ffb3, "snd_soc_dai_set_sysclk" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xa11501a6, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cas,audiosense-pi");
MODULE_ALIAS("of:N*T*Cas,audiosense-piC*");

MODULE_INFO(srcversion, "C7232EC1672CCB252C1EC13");
