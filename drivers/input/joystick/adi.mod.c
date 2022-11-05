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
	{ 0xee8daa79, "gameport_unregister_driver" },
	{ 0x4e99be65, "__gameport_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5933243, "input_free_device" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x82ebe4e8, "gameport_open" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x4093930c, "gameport_start_polling" },
	{ 0x16e84207, "gameport_stop_polling" },
	{ 0x37a0cba, "kfree" },
	{ 0xf114e1b7, "gameport_close" },
	{ 0x34fa48c2, "input_unregister_device" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "1637F73CF853A88EAEDF7F2");
