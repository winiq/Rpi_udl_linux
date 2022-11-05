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
	{ 0xcc26711b, "no_llseek" },
	{ 0x173def20, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb99135db, "i2c_for_each_dev" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xf44883e0, "bus_register_notifier" },
	{ 0x717ba82e, "i2c_bus_type" },
	{ 0xbad97937, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xdcb764ad, "memset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfad5ad9, "i2c_smbus_xfer" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x8bc6bda8, "cdev_device_add" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xc0346142, "device_initialize" },
	{ 0x3c81c627, "cdev_init" },
	{ 0x81822a88, "put_device" },
	{ 0xd323ee88, "cdev_device_del" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x13fd4e8b, "i2c_verify_client" },
	{ 0x9ff28fbb, "device_for_each_child" },
	{ 0x89e05f28, "i2c_adapter_type" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x2796b1a5, "i2c_get_adapter" },
	{ 0xcce69d19, "i2c_put_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C0CAD423B93883353EBACF");
