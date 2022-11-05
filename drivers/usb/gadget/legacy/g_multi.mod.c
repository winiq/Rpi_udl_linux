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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x6ad68bf3, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x8a8bf6c, "gether_set_host_addr" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x32143c0a, "fsg_common_set_cdev" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0xd17fc0fe, "gether_set_qmult" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1a448dcc, "usb_composite_overwrite_options" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd444fe93, "usb_composite_probe" },
	{ 0xe0cfb373, "usb_add_function" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x92997ed8, "_printk" },
	{ 0x1e7eb65d, "usb_put_function" },
	{ 0x10b6a214, "gether_set_dev_addr" },
	{ 0xdcc3c6a, "usb_composite_unregister" },
	{ 0x3da5bc30, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f90d071, "usb_string_ids_tab" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x6362ded4, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x58b4bfa0, "usb_remove_function" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite,u_ether");


MODULE_INFO(srcversion, "A52D1970E34B95E3B53F47A");
