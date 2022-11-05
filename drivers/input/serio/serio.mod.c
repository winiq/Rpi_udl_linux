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
	{ 0xed33f52c, "bus_register" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x26a7300c, "driver_register" },
	{ 0xbc2d65c3, "device_release_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xe65c2dfe, "device_bind_driver" },
	{ 0xb341ba23, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe1ecb773, "device_attach" },
	{ 0x753af3ce, "device_add" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0x6587c97e, "module_put" },
	{ 0x81822a88, "put_device" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdd981006, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0346142, "device_initialize" },
	{ 0x740189d8, "driver_attach" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9d317255, "driver_find" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "29FA3592EB82E8388368FAA");
