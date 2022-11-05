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
	{ 0x1de95874, "simple_open" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x3f7a21f0, "of_property_read_u32_index" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfbd5e2cf, "debugfs_create_u32" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x176d8cb2, "devm_ioremap_resource" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0xfdf39630, "rpi_firmware_get" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x6f2a887e, "kthread_stop" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperfC*");

MODULE_INFO(srcversion, "B7A9012E527D6DC2E9FB7D7");
