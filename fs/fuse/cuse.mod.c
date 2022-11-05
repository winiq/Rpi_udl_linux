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
	{ 0xb7139aea, "fuse_file_poll" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xba7b3b54, "misc_register" },
	{ 0xbad97937, "__class_create" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa1947cdd, "fuse_dev_operations" },
	{ 0x6a9daa89, "fuse_dev_free" },
	{ 0x132fd76e, "fuse_simple_background" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xf8dfc043, "fuse_dev_alloc_install" },
	{ 0xbbf3ec7c, "fuse_conn_init" },
	{ 0xf7b3a6e3, "fuse_dev_fiq_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0xd394de53, "cdev_add" },
	{ 0x7e216075, "cdev_alloc" },
	{ 0x753af3ce, "device_add" },
	{ 0x81822a88, "put_device" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xc0346142, "device_initialize" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1033f667, "fuse_direct_io" },
	{ 0x566fee5c, "fuse_do_ioctl" },
	{ 0xbdeb5564, "fuse_do_open" },
	{ 0x7a186787, "fuse_conn_get" },
	{ 0xc8254f62, "fuse_conn_put" },
	{ 0xbbdcdd00, "fuse_sync_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x94b50e84, "fuse_dev_release" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2b540e3f, "fuse_abort_conn" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "2AEFF4C6F1A63CE76F7CCD0");
