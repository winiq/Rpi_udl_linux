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
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x95bcca6d, "serio_unregister_driver" },
	{ 0xc573a288, "__serio_register_driver" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xc5933243, "input_free_device" },
	{ 0x926375f7, "serio_open" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x5709453a, "serio_close" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty02pr42id*ex*");

MODULE_INFO(srcversion, "2040749EB102A067D44DC02");
