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
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x416e5db, "single_release" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0x9bdab280, "fwnode_create_software_node" },
	{ 0x248e1473, "kfree_strarray" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xfeb9e504, "fwnode_remove_software_node" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x9609ced3, "devm_gpiochip_add_data_with_key" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xcbd1450f, "devm_irq_domain_create_sim" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x63fff561, "device_property_read_string" },
	{ 0x6e3b1fda, "device_property_read_u16_array" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x5dc00640, "single_open" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0xd853e833, "gpiochip_get_desc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3d204d55, "irq_create_mapping_affinity" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x2dca9a, "__irq_resolve_mapping" },
	{ 0x85a8f9d1, "debugfs_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-mockup");
MODULE_ALIAS("of:N*T*Cgpio-mockupC*");

MODULE_INFO(srcversion, "8688769DC011A3E8479D0C7");
