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
	{ 0x37332277, "of_translate_address" },
	{ 0xeb1aeeef, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x26a7300c, "driver_register" },
	{ 0x3d5522b8, "of_dma_configure_id" },
	{ 0x5ec70b67, "irq_create_of_mapping" },
	{ 0x9f9d1817, "pcie_set_readrq" },
	{ 0x980f9261, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcaa8f6b0, "__of_get_address" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd67d1d8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe5eb0c5b, "pci_set_master" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x69424dee, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x753af3ce, "device_add" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0x7f8071d4, "of_irq_parse_raw" },
	{ 0x92997ed8, "_printk" },
	{ 0x6bd4433f, "pci_read_config_dword" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x93914d52, "of_irq_parse_one" },
	{ 0xadc9aed4, "get_device" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x498b0cbc, "pci_request_regions" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xc0346142, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0xeb45f8ad, "of_platform_default_populate" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x85f39a5e, "pci_iomap" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x3c505ad4, "pci_enable_device" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A6D2F0290F7B048C013DD02");
