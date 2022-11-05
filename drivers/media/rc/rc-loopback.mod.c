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
	{ 0x55487139, "rc_unregister_device" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf446074f, "ir_raw_encode_scancode" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa5e379b3, "ir_raw_event_store" },
	{ 0x8c22b10c, "ir_raw_event_handle" },
	{ 0x236545c1, "ir_raw_event_store_with_filter" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BAC82C865EF337E91ADBE9A");
