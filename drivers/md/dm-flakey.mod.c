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
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x892f1701, "dm_per_bio_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xcd7998f0, "dm_report_zones" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9E4C4EFFCA26B03F2DF7C39");
