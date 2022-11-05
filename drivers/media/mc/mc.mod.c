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
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c81c627, "cdev_init" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4b31b655, "kobject_set_name" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xa5c5220d, "fput" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x6587c97e, "module_put" },
	{ 0xeb7c9dbf, "fwnode_graph_parse_endpoint" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8bc6bda8, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcd8d4fd5, "fd_install" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xc0346142, "device_initialize" },
	{ 0xd323ee88, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x4ca3a37, "anon_inode_getfile" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E7E97E0B777C76D46D3232F");
