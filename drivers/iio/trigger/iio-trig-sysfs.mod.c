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
	{ 0x93521c91, "iio_bus_type" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x753af3ce, "device_add" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xc0346142, "device_initialize" },
	{ 0xdd981006, "__module_get" },
	{ 0x6e28c8f9, "__iio_trigger_register" },
	{ 0x21ced322, "iio_trigger_alloc" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe8874a05, "irq_work_queue" },
	{ 0x9170c468, "iio_trigger_poll" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6587c97e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc624e93f, "iio_trigger_free" },
	{ 0xc672a391, "irq_work_sync" },
	{ 0xc73c4249, "iio_trigger_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "320AFBC518013C95E1FF6DC");
