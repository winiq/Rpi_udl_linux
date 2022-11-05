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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb70268e, "snd_soc_unregister_card" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xf2afe284, "snd_soc_get_pcm_runtime" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6e3dbefc, "snd_ctl_remove" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x923c82d, "snd_soc_limit_volume" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xa11501a6, "snd_soc_register_card" },
	{ 0xe433c7dd, "snd_soc_card_get_kcontrol" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "9232C968ED7BD1E26878DE3");
