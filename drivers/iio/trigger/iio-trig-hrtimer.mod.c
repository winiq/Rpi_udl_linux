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
	{ 0x10fc844e, "iio_unregister_sw_trigger_type" },
	{ 0x23df5f13, "iio_register_sw_trigger_type" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0x6e28c8f9, "__iio_trigger_register" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x21ced322, "iio_trigger_alloc" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x9170c468, "iio_trigger_poll" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x37a0cba, "kfree" },
	{ 0xc624e93f, "iio_trigger_free" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc73c4249, "iio_trigger_unregister" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,industrialio");


MODULE_INFO(srcversion, "26DAE31E1F737B2E0E5683D");
