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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0xd5dd6c33, "fwnode_graph_get_remote_port_parent" },
	{ 0x5dc00640, "single_open" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x416e5db, "single_release" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x93681f59, "fwnode_property_present" },
	{ 0xc570ea5f, "_dev_notice" },
	{ 0xbd19b5, "seq_read" },
	{ 0x557cc586, "fwnode_handle_get" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x13fd4e8b, "i2c_verify_client" },
	{ 0x44f6708c, "media_create_ancillary_link" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0xdea33731, "v4l2_device_register_subdev" },
	{ 0xc197395f, "fwnode_graph_get_port_parent" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xef48ca0f, "dev_fwnode" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "942B765AC75ED990FD59A3E");
